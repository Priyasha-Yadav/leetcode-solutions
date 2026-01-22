class Solution {
public:
    int lengthOfLastWord(string s) {
        string word = "";
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ')
                continue;
            else {
                while (i >= 0 && s[i] != ' ') {
                    word += s[i];
                    i--;
                }
                break;
            }
        }
        return word.length();
    }
};