class Solution {
private:
    bool isPalindrome(string& s) {
        string t = s;
        reverse(t.begin(), t.end());
        return s == t;
    }

public:
    string firstPalindrome(vector<string>& words) {
        for (string s : words) {
            if (isPalindrome(s))
                return s;
        }
        return "";
    }
};