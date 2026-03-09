class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int l = 0, r = 0;
        int max_len = 0;
        while (r < s.size()) {
            while (window.count(s[r])) {
                window.erase(s[l]);
                l++;
            }
            window.insert(s[r]);
            max_len = max(max_len, r - l + 1);
            r++;
        }
        return max_len;
    }
};