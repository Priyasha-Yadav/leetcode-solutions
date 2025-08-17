class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if (k == 0 || n >= k + maxPts - 1) return 1.0;

        vector<double> dp(n + 1, 0.0);
        // Base case: if score is between k and n, probability = 1
        for (int i = k; i <= n; i++) {
            dp[i] = 1.0;
        }

        // Initialize sliding window: sum of dp[i+1 ... i+maxPts]
        double windowSum = min(n - k + 1, maxPts); 
        // Because dp[k ... n] = 1, so window = count of ones

        for (int i = k - 1; i >= 0; i--) {
            dp[i] = windowSum / maxPts;
            windowSum += dp[i];
            if (i + maxPts <= n) {
                windowSum -= dp[i + maxPts];
            }
        }

        return dp[0];
    }
};