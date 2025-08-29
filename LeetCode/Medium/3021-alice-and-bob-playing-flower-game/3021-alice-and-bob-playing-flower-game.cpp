class Solution {
public:
    long long flowerGame(int n, int m) {
        long long odds_n = (n + 1) / 2;
        long long evens_n = n / 2;
        long long odds_m = (m + 1) / 2;
        long long evens_m = m / 2;

        return odds_n * evens_m + evens_n * odds_m;
    }
};
