class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> m;
        int count = -1;
        for (int i : arr) {
            m[i]++;
        }
        for (const auto& p : m) {

            int key = p.first;
            const int& value = p.second;
            if (key == value)
                count = value;
        }
        return count;
    }
};