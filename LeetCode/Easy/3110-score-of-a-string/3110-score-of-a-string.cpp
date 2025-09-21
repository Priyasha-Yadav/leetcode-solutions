class Solution {
public:
    int scoreOfString(string s) {
        int diff = 0;
        int score = 0;
        for(int i = 0; i<s.length() - 1; i++){
            diff = abs(s[i+1]- s[i]);
            score+=diff;
        }
        return score;
    }
};