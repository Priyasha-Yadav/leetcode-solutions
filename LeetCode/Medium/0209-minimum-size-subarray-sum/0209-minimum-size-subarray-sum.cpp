class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int sum = 0, j = 0;
        int min_length = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum >= k) {
                if (i - j + 1 < min_length) {
                    min_length = i - j + 1;
                }
                while(sum >= k){
                    sum -= nums[j];
                    if(i - j + 1 < min_length){
                        min_length = i - j + 1;
                    }
                    j++;
                }
            }
        }
        return min_length = (min_length == INT_MAX) ? 0: min_length;
    }
};