class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> result(n, 0); 

        int j = 0;
        for (int i = 0; i < n && j < n; i++) {
            result[j] = arr[i]; 
            j++;
            if (arr[i] == 0 && j < n) {
                result[j] = 0;
                j++;
            }
        }

        arr = result; 
    }
};
