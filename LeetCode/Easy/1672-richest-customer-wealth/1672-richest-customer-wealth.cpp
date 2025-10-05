class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maximum = 0, curr = 0;
        for (int i = 0; i < accounts.size(); i++) {
            for (int j = 0; j < accounts[0].size(); j++) {
                curr += accounts[i][j];
            }
            maximum = max(maximum, curr);
            curr = 0;
        }
    return maximum;
    }
};