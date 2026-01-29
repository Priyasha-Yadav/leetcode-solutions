class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0, f = 0;
        for (char c : s) {
            if (c == 'L')
                f++;
            else if (c == 'R')
                f--;
            if (f == 0)
                count++;
        }
        return count;
    }
};