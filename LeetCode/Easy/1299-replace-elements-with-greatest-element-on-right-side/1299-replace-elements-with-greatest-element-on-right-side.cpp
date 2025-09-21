class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int max_right = -1;

        for(int i = n - 1; i >= 0; i--) {
            int current = arr[i];
            arr[i] = max_right;
            max_right = max(max_right, current);
        }
        return arr;
    }
};
