class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m1 = INT_MAX, m2 = INT_MAX;
        for (int i = 0; i < n; i++) {
                if(nums1[i] < m1) m1 = nums1[i];
                if(nums2[i] < m2) m2 = nums2[i];
        }
        return m2 - m1;
    }
};