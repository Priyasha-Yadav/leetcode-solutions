class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (int i : nums) {
            m[i]++;
        }
        vector<vector<int>> buckets(nums.size() + 1);
        for (auto itr : m) {
            buckets[itr.second].push_back(itr.first);
        }

        vector<int> result;
        for (int i = buckets.size() - 1; i >= 0 && result.size() < k; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) break;
            }
        }

        return result;
    }
};
