class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int curr = 0;
        int result;
        for (int i = 1; k; i++) {
            if (curr < arr.size() && arr[curr] == i) {
                curr++;
            } else {
                result = i;
                k--;
            }
        }
        return result;
    }
};