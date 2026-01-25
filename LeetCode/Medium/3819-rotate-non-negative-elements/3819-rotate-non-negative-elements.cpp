class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> pos;
        for (int i : nums)
            if (i >= 0)
                pos.push_back(i);
        if(pos.size() == 0) return nums;
        k = k % pos.size();
        reverse(pos.begin(), pos.begin() + k);
        reverse(pos.begin() + k, pos.end());
        reverse(pos.begin(), pos.end());
        int j = 0;
        for (int &i : nums)
            if (i >= 0){
                i = pos[j];
                j++;
            }
        return nums;
    }
};