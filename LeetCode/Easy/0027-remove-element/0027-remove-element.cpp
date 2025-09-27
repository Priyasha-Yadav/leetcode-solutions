class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]!= val){
                ans.push_back(nums[i]);
                count++;
            }
    
        }
        ans.resize(nums.size());
        nums = ans;
        (nums == ans) ? cout<<"True" : cout<< "False";
        return count;

    }
};