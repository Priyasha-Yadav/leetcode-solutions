class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char, int> m;
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            m[s[i]] = i;
            if (m.size() == 3)
                count = count + (1 + min(m['a'], min(m['b'], m['c'])));
        }
        return count;
    }
};