class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        
        auto simulate = [&](int start, int dir) {
            vector<int> arr = nums; // make a copy
            int curr = start;
            int d = dir;
            
            while (curr >= 0 && curr < n) {
                if (arr[curr] == 0) {
                    curr += d;
                } else {
                    arr[curr]--;
                    d = -d; 
                    curr += d;
                }
            }
            return all_of(arr.begin(), arr.end(), [](int x){ return x == 0; });
        };
        
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                if (simulate(i, -1)) count++;
                if (simulate(i, 1)) count++;
            }
        }
        return count;
    }
};
