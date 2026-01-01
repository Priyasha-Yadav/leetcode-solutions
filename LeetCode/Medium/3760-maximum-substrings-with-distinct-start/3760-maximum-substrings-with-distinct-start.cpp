class Solution {
public:
    int maxDistinct(string s) {
        map<char, int> m;
        for (char c : s)
            m[c]++;
        return m.size();
    }
};