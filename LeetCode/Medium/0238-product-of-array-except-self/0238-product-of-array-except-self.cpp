class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        vector<int> result(n);
        int prefixProduct = 1;
        for (int i = 0; i < n; i++) {
            prefix[i] = prefixProduct;
            prefixProduct = prefixProduct * nums[i];
        }

        int suffixProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = suffixProduct;
            suffixProduct = suffixProduct * nums[i];
        }
        for(int i = 0; i< n; i++){
            result[i] =  prefix[i] * suffix[i];
        }

        return result;
    }
    void printVector(vector<int> nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            cout << nums[i] << " ";
        }
    }
};
