class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int min = INT_MAX, diff = 0;
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size() - 1; i++) {
            diff = arr[i + 1] - arr[i];
            if (diff < min)
                min = diff;
        }
        for (int i = 0; i < arr.size() - 1; i++) {
            diff = arr[i + 1] - arr[i];
            if (diff == min)
                res.push_back({arr[i], arr[i + 1]});
        }
        return res;
    }
};