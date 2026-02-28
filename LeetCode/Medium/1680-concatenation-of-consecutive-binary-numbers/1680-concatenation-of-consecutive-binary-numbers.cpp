class Solution {
public:
    const int MOD = 1e9 + 7;
    int concatenatedBinary(int n) {
        long res = 0;
        int bits = 0;
        for (int i = 1; i <= n; i++) {
            if ((i & (i - 1)) == 0)
                bits++;
            res = ((res << bits) | i) % MOD;
        }
        return res;
    }
};