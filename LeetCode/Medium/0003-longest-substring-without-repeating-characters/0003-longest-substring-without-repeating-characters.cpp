class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int l = 0, max_len = 0;
        for(int r = 0; r < s.length(); r++){
            while(window.count(s[r])){
                window.erase(s[l]);
                l++;
            }
            window.insert(s[r]);
            max_len = max(max_len, r - l + 1);
        }
        return max_len;
    }
};