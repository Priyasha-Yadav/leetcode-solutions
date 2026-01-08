class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int, int> m;
        for (int i : nums) {
            m[i]++;
        }
        for (int i : nums) {
            if (m[i] % 2 == 1)
                return false;
        }
        return true;
    }
};