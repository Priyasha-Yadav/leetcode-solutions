class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if (digits[n - 1] < 9) {
            digits[n - 1]++;
            return digits;
        }
        int end = n - 1;
        while (end >= 0 && digits[end] == 9) {
            digits[end] = 0;
            end--;
        }
        if (end < 0) {
            vector<int> result;
            result.resize(n + 1, 0);
            result[0] = 1;
            return result;
        }
        digits[end]++;
        return digits;
    }
};

