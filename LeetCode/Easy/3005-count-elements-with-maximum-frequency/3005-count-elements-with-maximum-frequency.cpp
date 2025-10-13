class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> m;
        int maximum = 0;
        int count =0;
        for(int i: nums){
            m[i]++;
            maximum = max(maximum, m[i]);
        }
        for(int i: nums){
            if(m[i] == maximum) count++;
        }
        return count;
    }
};