class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0;
        for (char c : word) {
            if (isupper(c))
                upper++;
        }

        if (upper == 0 || upper == word.length())
            return true;
        if (upper == 1 && isupper(word[0]))
            return true;
        return false;
    }
};