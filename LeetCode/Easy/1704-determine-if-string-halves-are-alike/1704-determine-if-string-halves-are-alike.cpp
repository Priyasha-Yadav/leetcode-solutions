class Solution {
public:
    bool halvesAreAlike(string s) {
        int l = 0, r = s.length() - 1;
        int c = 0;
        while (l < r) {
            if (isVowel(s[l]))
                c++;
             if (isVowel(s[r]))
                c--;
            l++;
            r--;
        }
        return c == 0;
    }

private:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};