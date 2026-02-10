class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int n = nums.size();
        for(int i : nums) m[i]++;

        vector<vector<int>> buckets(n+1);
        for(auto itr : m){
            buckets[itr.second].push_back(itr.first);
        }
        vector<int> res;
        for(int i = buckets.size() - 1; i >= 0 && res.size() < k; i--){
            for(int j : buckets[i]){
                res.push_back(j);
            }

           if(res.size() == k) break;
        }

        return res;

    }
};
