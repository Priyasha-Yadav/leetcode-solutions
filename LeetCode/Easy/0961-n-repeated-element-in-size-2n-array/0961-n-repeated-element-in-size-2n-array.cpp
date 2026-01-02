class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        int n = m.size() - 1;
        for (int i : nums) {
            if (m[i] == n)
                return i;
        }
        return 0;
    }
};