class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> m;
        int sum = 0;
        for (int i : nums) {
            m[i]++;
        }
        for (int i : nums) {
            if (m[i] == 1)
                sum += i;
        }
        return sum;
    }
};