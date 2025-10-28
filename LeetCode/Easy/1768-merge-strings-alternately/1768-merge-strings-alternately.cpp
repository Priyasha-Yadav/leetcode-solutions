class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str = "";
        string maximum = (word1.length() > word2.length()) ? word1 : word2;
        for (int i = 0; i < min(word1.length(), word2.length()); i++) {
            str += word1[i];
            str += word2[i];
        }

        for (int i = word1.length() + word2.length() - maximum.length();
             i < maximum.length(); i++) {
            str += maximum[i];
        }
        return str;
    }
};