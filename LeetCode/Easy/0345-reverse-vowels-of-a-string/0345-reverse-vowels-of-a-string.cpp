class Solution {
public:
    string reverseVowels(string s) {
        int st = 0;
        int end = s.length() - 1;

        while (st < end) {
            if (!isVowel(s[st])) {
                st++;
            } else if (!isVowel(s[end])) {
                end--;
            } else {
                swap(s[st], s[end]);
                st++;
                end--;
            }
        }

        return s;
    }

private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};
