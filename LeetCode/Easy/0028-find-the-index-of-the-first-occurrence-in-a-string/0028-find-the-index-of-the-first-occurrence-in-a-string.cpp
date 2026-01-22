class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(); // 9
        int m = needle.size(); // 3

        for (int i = 0; i <= n - m; i++) { // i = 0; i <= 6; i++
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) { // j < 3
                j++;
            }
            if (j == m) return i;
        }
        return -1;
    }
};
