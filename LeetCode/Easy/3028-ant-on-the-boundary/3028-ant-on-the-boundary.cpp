class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int sum = 0;
        for (int i : nums){
            sum += i;
            if(sum == 0) return 1;
            }
        return (sum == 0) ? 1 : 0;
    }
};