class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.length() - 1;
        while (l < r) {
            if (!isalnum(s[l]))
                l++;
            if (!isalnum(s[r]))
                r--;
            if (isalnum(s[l]) && isalnum(s[r])) {
                if ((char)tolower(s[l]) != (char)tolower(s[r]))
                    return false;
                l++;
                r--;
            }
        }
        return true;
    }
};