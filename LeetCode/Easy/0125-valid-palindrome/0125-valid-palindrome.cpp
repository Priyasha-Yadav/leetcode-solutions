class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int end = s.length() - 1;
        while (st <= end) {
            if (!isAlphaNumeric(s[st])) {
                st++;
                continue;
            }

            if (!isAlphaNumeric(s[end])) {
                end--;
                continue;
            }

            if (toLower(s[st]) != toLower(s[end]))
                return false;
            st++;
            end--;
        }
        return true;
    }

private:
    char toLower(char& c) {
        if (c <= 'Z' && c >= 'A')
            c += 32;

        return c;
    }

    bool isAlphaNumeric(char c) {
        if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' ||
            c >= '0' && c <= '9')
            return true;

        return false;
    }
};