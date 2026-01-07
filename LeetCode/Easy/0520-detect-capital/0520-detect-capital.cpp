class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.length() == 1) return true;

        bool isUpper = true, isLower = true;

        for (char c : word) {
            if (!(c >= 'A' && c <= 'Z')) isUpper = false;
            if (!(c >= 'a' && c <= 'z')) isLower = false;
        }


        if (isUpper) return true;
        if (isLower) return true;


        if (word[0] >= 'A' && word[0] <= 'Z') {
            for (int i = 1; i < word.length(); i++) {
                if (!(word[i] >= 'a' && word[i] <= 'z'))
                    return false;
            }
            return true;
        }

        return false;
    }
};
