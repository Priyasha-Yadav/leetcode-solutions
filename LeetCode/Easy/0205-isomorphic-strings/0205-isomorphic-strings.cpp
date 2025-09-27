class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> m;
        map<char, char> n;

        for (int i = 0; i < s.length(); i++) {
            if (m[s[i]]) {
                if (m.at(s[i]) != t[i])
                    return false;
            }
            m[s[i]] = t[i];
            if (n[t[i]]) {
                if (n.at(t[i]) != s[i])
                    return false;
            }
            n[t[i]] = s[i];
        }
    return true;
    }
};