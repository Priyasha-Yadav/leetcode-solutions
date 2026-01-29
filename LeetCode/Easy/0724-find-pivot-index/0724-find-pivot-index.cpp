class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int p = 0, s = 0;
        int n = nums.size();
        vector<int> prefix(n, 0);
        vector<int> suffix(n, 0);
        for (int i = 0; i < n; i++) {
            p += nums[i];
            prefix[i] = p;
        }
        for (int i = n - 1; i >= 0; i--) {
            s += nums[i];
            suffix[i] = s;
        }
        for(int i = 0; i < n  ; i++){
           if(prefix[i] == suffix[i]) return i;
        }
        return -1;
    }
};