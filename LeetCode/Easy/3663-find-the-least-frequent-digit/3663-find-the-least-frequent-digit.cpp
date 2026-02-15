class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int, int> m;
        int min = INT_MAX, digit = INT_MAX;
        while (n) {
            int r = n % 10;
            n /= 10;
            m[r]++;
        }
        for (auto& itr : m) {
            if (itr.second < min) {
                min = itr.second;
                digit = itr.first;
            } else if (itr.second == min) {
                if (digit > itr.first)
                    digit = itr.first;
            }
        }
        return digit;
    }
};