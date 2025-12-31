class Solution {
public:
    string reverseWords(string s) {
        int st = 0, end = 0;
        for (int i = 0; i < s.length(); i++) {

            if (s[i] == ' ' || i == s.length() - 1) {
                end = i - 1;
                if(i == s.length() - 1) end = i;
                while (st <= end) {
                    swap(s[st], s[end]);
                    st++;
                    end--;
                };
                st = i + 1;
            }
        }
        return s;
    }
};