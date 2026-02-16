class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, bool> m;
        int count = words.size();
        for (char c : allowed)
            m[c] = true;
        for (string s : words) {
            for (char c : s)
                if (m.find(c) == m.end()) {
                    count--;
                    break;
                }
        }
        return count;
    }
};