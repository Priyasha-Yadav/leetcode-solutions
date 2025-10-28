class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1;
        vector<int> copy = nums;
        vector<int> result;
        sort(nums.begin(), nums.end()); 
        while (st < end) {
            int sum = nums[st] + nums[end];
            if (sum == target) {
                result.push_back(nums[st]);
                result.push_back(nums[end]);
                break;
            } else if (sum > target)
                end--;
            else if (sum < target)
                st++;
        }
        for(int i = 0; i < copy.size(); i++){
            if(result[0] == copy[i]) result[0] = i;
            else if(result[1] == copy[i]) result[1] = i;
        }
        return result;
    }
};