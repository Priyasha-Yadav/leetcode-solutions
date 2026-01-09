class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        vector<bool> seen(n + 1, 0);
        vector<int> res;
        for (int i = 0; i < n; i++) {
            seen[nums[i]] = 1;
        }

        for (int i = 1; i < seen.size(); i++) {
            if (seen[i] == 0)
                res.push_back(i);
        }

        return res;
    }
};