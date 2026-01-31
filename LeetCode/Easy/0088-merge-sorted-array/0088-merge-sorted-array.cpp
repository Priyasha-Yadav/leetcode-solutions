class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx = m + n - 1;
        int i = m - 1;

        while (n > 0) {
            if (i >= 0 && nums1[i] > nums2[n - 1]) {
                nums1[idx--] = nums1[i--];
            } else {
                nums1[idx--] = nums2[n - 1];
                n--;
            }
        }
    }
};
