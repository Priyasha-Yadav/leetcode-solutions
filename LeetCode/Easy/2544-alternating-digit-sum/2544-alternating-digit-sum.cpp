class Solution {
public:
    int alternateDigitSum(int n) {
        int o = 0, e = 0;
        int i = 1;
        while (n) {
            int r = n % 10;
            if (i % 2 == 0)
                e += r;
            else
                o += r;
            n /= 10;
            i++;
        }
        return (i % 2 == 1) ? e - o : o - e;
    }
};