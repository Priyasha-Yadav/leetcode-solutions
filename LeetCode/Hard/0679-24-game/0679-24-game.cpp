class Solution {
public:
    bool judgePoint24(vector<int>& cards) {
        vector<double> nums(cards.begin(), cards.end());
        return solve(nums);
    }

private:
    const double EPSILON = 1e-6;

    bool solve(vector<double>& nums) {
        if (nums.size() == 1) {
            return abs(nums[0] - 24.0) < EPSILON;
        }

        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == j) continue;
                
                vector<double> nextNums;
                // Pick numbers that are not i or j
                for (int k = 0; k < n; ++k) {
                    if (k != i && k != j) {
                        nextNums.push_back(nums[k]);
                    }
                }

                // Try all possible results of nums[i] op nums[j]
                for (double val : compute(nums[i], nums[j])) {
                    nextNums.push_back(val);
                    if (solve(nextNums)) return true;
                    nextNums.pop_back(); // backtrack
                }
            }
        }
        return false;
    }

    vector<double> compute(double a, double b) {
        vector<double> res = {a + b, a - b, b - a, a * b};
        if (fabs(b) > EPSILON) res.push_back(a / b);
        if (fabs(a) > EPSILON) res.push_back(b / a);
        return res;
    }
};
