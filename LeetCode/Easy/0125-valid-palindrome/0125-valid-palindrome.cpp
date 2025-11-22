class Solution {
public:
    bool isPalindrome(string s) {
        toLower(s);
        string result = toAlphaNumeric(s);
        int st = 0;
        int end = result.length() - 1;
        while (st <= end) {
            if (result[st] != result[end])
                return false;
            st++;
            end--;
        }
        return true;
    }

private:
    void toLower(string& str) {
        for (int i = 0; i < str.length(); i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += 32;
            }
        }
    }
    string toAlphaNumeric(string& str) {
        string result = "";
        for (char c : str) {
            if (c >= 'a' && c <= 'z' || c >= 48 && c <= 57)
                result += c;
        }
        return result;
    }
};