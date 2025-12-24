class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = 0;
        for (int i = 0; i < apple.size(); i++)
            sum += apple[i];
        sort(capacity.begin(), capacity.end()); // 1,2,3,4,5
        for (int i = capacity.size() - 1; i >= 0; i--) { // 4, 3
            sum -= capacity[i];
            if (sum <= 0)
                return capacity.size() - i;
        }
        return 0;
    }
};