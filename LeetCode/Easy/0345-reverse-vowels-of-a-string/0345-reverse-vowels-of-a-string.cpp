class Solution {
public:
    string reverseVowels(string& s) {
        int st = 0;
        int end = s.length() - 1;
        while (st < end) {
            if (isVowel(s[st])) {
                if (isVowel(s[end])) {
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

private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};