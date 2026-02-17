class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int c = 0;
        for (int i = left; i <= right; i++) {
            int l = words[i].length() - 1;
            if (isVowel(words[i][0]) && isVowel(words[i][l]))
                c++;
        }
        return c;
    }

private:
    bool isVowel(char c) {
        tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};