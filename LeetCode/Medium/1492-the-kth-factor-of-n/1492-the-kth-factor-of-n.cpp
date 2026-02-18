class Solution {
public:
    int kthFactor(int n, int k) {
        int factor = 0;
        if(n == 1 || n == 0) return 1;
        if (n <= k)
            return -1;
        for (int i = 1; i <= n && k; i++) {
            if (n % i == 0) {
                factor = i;
                k--;
            };
        }
        return factor;
    }
};