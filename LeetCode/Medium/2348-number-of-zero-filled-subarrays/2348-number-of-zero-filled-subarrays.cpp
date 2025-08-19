class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0, len = 0, n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                len++;
                ans += len;
            }
            else len = 0;
        }
        return ans;
    }
};