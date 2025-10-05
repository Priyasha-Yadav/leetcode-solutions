class Solution {
public:
    string reverseOnlyLetters(string s) {
        int st = 0;
        int end = s.length() - 1;
        while (st < end) {
            if (s[st] >= 65 && s[st] <= 90 || s[st] >= 97 && s[st] <= 122) {
                if (s[end] >= 65 && s[end] <= 90 ||
                    s[end] >= 97 && s[end] <= 122) {
                    swap(s[st], s[end]);
                    st++;
                    end--;
                } else
                    end--;
            } else
                st++;
        }
        return s;
    }
};