class Solution {
public:
    string sortVowels(string s) {
        vector<int> vowel;
        for (char c : s) {
            if (isVowel(c))
                vowel.push_back(c);
        }
        if (vowel.empty())
            return s;
        sort(vowel.begin(), vowel.end());
        int i = 0;
        for (char &c : s) {
            if (isVowel(c)) {
                c = char(vowel[i]);
                i++;
            }
        }
        return s;
    }

private:
    bool isVowel(char c) {
        return c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' ||
               c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U';
    }
};