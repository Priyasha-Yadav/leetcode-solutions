class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.length() > t.length())
            return false;
        int l = 0, r = 0;
        while (r < t.length()) {
            if (t[r] == s[l]) {
                l++;
            }
            r++;
        }
        cout<< l <<endl;
        return l == s.length();
    }
};