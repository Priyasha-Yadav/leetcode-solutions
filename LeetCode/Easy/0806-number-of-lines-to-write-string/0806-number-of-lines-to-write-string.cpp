class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int count = 1, sum = 0;
        for (char c : s) {
            sum += widths[c - 'a'];
            if (sum > 100) {
                count++;
                sum = widths[c - 'a'];
            }
            if (sum == 100) {
                count++;
                sum = 0;
            }
        };
        if (sum == 0) {
            count--;
            sum = 100;
        }
        return {count, sum};
    }
};