class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int, int> m;
        for(int i : nums)m[i]++;
        int curr = original;
        while(m.find(curr) != m.end()){
            curr *= 2;
        }
        return curr;
    }
};