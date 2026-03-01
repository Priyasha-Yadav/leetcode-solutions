class Solution {
private:
    bool isPalindrome(string& s) {
        int st = 0, end = s.length() - 1;
        while (st < end) {
            if (s[st] == s[end]) {
                st++;
                end--;
            } else
                return false;
        }
        return true;
    }

public:
    string firstPalindrome(vector<string>& words) {
        for (string s : words) {
            if (isPalindrome(s)) return s;
        }
        return "";
    }
};