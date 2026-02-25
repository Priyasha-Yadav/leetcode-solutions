class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<vector<int>> buckets(33);
        vector<int> res;

        for (int num : arr) {
            int bits = __builtin_popcount(num);
            buckets[bits].push_back(num);
        }

        for (auto &bucket : buckets) {
            sort(bucket.begin(), bucket.end());
            for (int num : bucket) {
                res.push_back(num);
            }
        }

        return res;
    }
};