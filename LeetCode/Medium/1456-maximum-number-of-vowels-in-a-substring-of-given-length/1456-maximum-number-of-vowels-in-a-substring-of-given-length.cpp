class Solution {
public:
    int maxVowels(string s, int k) {
        int max_count = 0;
        int c = 0;
        int l = 0, r = 0;
        while (r < k) {
            if (isVowel(s[r]))
                c++;
            r++;
        }
        max_count = c;
        while (r < s.length()) {
            if (isVowel(s[l]))
                c--;
            if (isVowel(s[r]))
                c++;
            l++;
            r++;
            max_count = max(c, max_count);
        }

        return max_count;
    }

private:
    bool isVowel(char& c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};