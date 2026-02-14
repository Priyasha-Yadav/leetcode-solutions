class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, r = 0, max_len = 0, z = 0;
        int n = nums.size();
        while(r < n){
            if(nums[r] == 0) z++;
            while(z > k){
                if(nums[l] == 0) z--;
                l++;
            }
            max_len = max(max_len, r - l + 1);
            r++;
        }
        return max_len;
    }
}; 