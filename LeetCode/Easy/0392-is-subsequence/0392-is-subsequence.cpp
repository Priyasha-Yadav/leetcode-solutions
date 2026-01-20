class Solution {
public:
    bool isSubsequence(string s, string t) {
        int p = 0;
        for (char c : t) {
            if (c == s[p])
                p++;
        }
        return p == s.length();
    }
};