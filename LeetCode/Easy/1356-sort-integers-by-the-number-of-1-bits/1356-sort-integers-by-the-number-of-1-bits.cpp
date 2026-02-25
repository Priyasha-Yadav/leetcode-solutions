class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<vector<int>> buckets(33);
        vector<int> res;

        for (int num : arr) {
            int bits = countBits(num);
            buckets[bits].push_back(num);
        }

        for (auto &bucket : buckets) {
            if (!bucket.empty()) {
                sort(bucket.begin(), bucket.end());
                for (int num : bucket) {
                    res.push_back(num);
                }
            }
        }

        return res;
    }

private:
    int countBits(int n) {
        int count = 0;
        while (n) {
            count += n % 2;
            n /= 2;
        }
        return count;
    }
};