class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int score = INT_MIN;
        int digit = INT_MAX;
        for (int d : divisors) {
            int curr = 0;
            for (int i : nums) {
                if (i % d == 0) {
                    curr++;
                }
            }
            if (score < curr) {
                score = curr;
                 digit = d;
            } else if (score == curr && digit > d)
                digit = d;
        }
        return digit;
    }
};