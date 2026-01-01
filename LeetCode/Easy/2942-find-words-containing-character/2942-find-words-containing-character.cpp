class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        for (int i = 0; i < words.size(); i++) {
            int count = 0;
            for (char c : words[i]) {
                if (c == x)
                    count++;
            }
            if (count > 0)
                result.push_back(i);
        }
        return result;
    }
};