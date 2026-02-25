class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<vector<int>> buckets (32);
        vector<int> res;
        for(int i : arr){
            int idx = countBits(i);
            buckets[idx].push_back(i);
        }
        for(auto& bucket : buckets){
            if(bucket.size() == 1) res.push_back(bucket[0]);
            else if(bucket.size() > 1) {
                sort(bucket.begin(), bucket.end());
                for(int i : bucket){
                    res.push_back(i);
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