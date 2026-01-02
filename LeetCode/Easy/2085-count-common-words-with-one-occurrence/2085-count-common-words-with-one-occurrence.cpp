class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string, int> m;
        map<string, int> n;
        int count = 0;
        for (int i = 0; i < words1.size(); i++) {
            m[words1[i]]++;
        }

        for (int i = 0; i < words2.size(); i++) {
            n[words2[i]]++;
        }

        for (int i = 0; i < words2.size(); i++) {
            if(n[words2[i]] == 1 && m[words2[i]] == n[words2[i]]) count++;
        }
        return count;
    }
};