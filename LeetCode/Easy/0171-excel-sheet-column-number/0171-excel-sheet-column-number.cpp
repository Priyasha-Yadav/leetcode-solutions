class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        for (char c : columnTitle) {
            int d = c - 'A' + 1;
            res *= 26;
            res += d;
        }
        return res;
    }
};