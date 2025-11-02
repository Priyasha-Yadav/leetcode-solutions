class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (!prices.size())
            return 0;
        int bestBuy = prices[0], maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (bestBuy < prices[i]) {
                maxProfit = max(prices[i] - bestBuy, maxProfit);
            }
            if (bestBuy > prices[i]) {
                bestBuy = prices[i];
            }
        }

        return maxProfit;
    }
};