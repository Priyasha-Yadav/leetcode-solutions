class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int n = s.size();
        int max_len = 0;
        int l = 0;
        for (int r = 0; r < n; r++) {
            if (m.find(s[r]) != m.end()) {
                if (m[s[r]] >= l)
                    l = m[s[r]] + 1;
            }
            max_len = max(max_len, r - l + 1);
            m[s[r]] = r;
        }
        return max_len;
    }
};