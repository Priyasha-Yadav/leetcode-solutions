class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<char, string> m;
        map<string, int> r;
        vector<string> morseCode = {
            ".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",
            "....", "..",   ".---", "-.-",  ".-..", "--",   "-.",
            "---",  ".--.", "--.-", ".-.",  "...",  "-",    "..-",
            "...-", ".--",  "-..-", "-.--", "--.."};

        for (int i = 0; i < 26; i++)
            m['a' + i] = morseCode[i];

        for (int i = 0; i < words.size(); i++) {
            string code = "";
            for (char c : words[i]) {
                code += m[c];
            }
            r[code]++;
        }
        return r.size();
    }
};