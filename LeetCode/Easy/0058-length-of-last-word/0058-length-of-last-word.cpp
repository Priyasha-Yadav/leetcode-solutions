class Solution {
public:
    int lengthOfLastWord(string s) {
        int c = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ')
                continue;
            else {
                while (i >= 0 && s[i] != ' ') {
                    c++;
                    i--;
                }
                break;
            }
        }
        return c;
    }
};