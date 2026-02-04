class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        if (n == 0)
            return {};
        vector<string> res;
        int i = 0;
        for (int i = 0; i < n; i++) {
            int start = nums[i];
            while (i + 1 < n && (long long)nums[i + 1] == (long long)nums[i] + 1)
                i++;
            int end = nums[i];
            if (start == end)
                res.push_back(to_string(end));
            else
                res.push_back(to_string(start) + "->" + to_string(end));
        }
        return res;
    }
};