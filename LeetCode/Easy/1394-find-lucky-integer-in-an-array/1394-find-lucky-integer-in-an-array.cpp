class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> m;
        int max_lucky = -1;
        for (int i : arr) {
            m[i]++;
        }
        for (int i : arr) {
            if (i == m[i])
                max_lucky = max(max_lucky, i);
        }
        return max_lucky;
    }
};