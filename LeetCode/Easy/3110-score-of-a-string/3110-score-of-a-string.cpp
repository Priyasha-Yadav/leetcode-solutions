class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        int diff = 0;

        for(int i = 1; i < s.length(); i++){
            diff = abs(s[i] - s[i-1]);
            score += diff;
        }
        return score;

    }
};