class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int st = 0;
        int end = nums.size() - 1;
        while(st <= end){
            if(nums[st] % 2 == 1){
                if(nums[end] % 2 == 0){
                    swap(nums[st], nums[end]);
                    st++;
                    end--;
                }
                else end--;
            }
            else st++;
        }
        return nums;
    }
};