class Solution {
public:
    int maxFreqSum(string s) {
        map<char, int> m;
        for (char c : s)
            m[c]++;
        int maxVowel = 0, maxConsonant = 0;
        for (char c : s) {
            if (isVowel(c))
                maxVowel = max(m[c], maxVowel);
            else
                maxConsonant = max(m[c], maxConsonant);
        }

        return maxConsonant + maxVowel;
    }

private:
    bool isVowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }
};