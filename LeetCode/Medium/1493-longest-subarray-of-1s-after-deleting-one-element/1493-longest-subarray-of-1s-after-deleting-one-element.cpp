class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, zeros = 0, maxLen = 0;
        
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) {
                zeros++;
            }
            
            while (zeros > 1) {
                if (nums[left] == 0) zeros--;
                left++;
            }
            
            // window size is (right - left + 1)
            maxLen = max(maxLen, right - left + 1);
        }
        
        // delete one element → subtract 1
        return maxLen - 1;
    }
};
