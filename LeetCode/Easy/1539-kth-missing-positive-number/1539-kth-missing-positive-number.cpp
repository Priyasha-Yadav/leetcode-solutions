class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> missing;
        int curr = 0;
        for (int i = 1; missing.size() < k; i++) {
           if (curr < arr.size() && arr[curr] == i) {
                curr++;
            } else {
                missing.push_back(i);
            }
        }
        return missing[k - 1];
    }
};