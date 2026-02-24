class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int r = 0, l = 0;
        int max_len = 0;
        int n = fruits.size();
        unordered_map<int, int> m;
        while (r < n) {
            m[fruits[r]]++;
            if (m.size() < 3) {
                max_len = max(max_len, r - l + 1);
                r++;
            } else {
                m[fruits[l]]--;
                if (m[fruits[l]] == 0)
                    m.erase(fruits[l]);
                r++;
                l++;
            }
        }
        return max_len;
    }
};