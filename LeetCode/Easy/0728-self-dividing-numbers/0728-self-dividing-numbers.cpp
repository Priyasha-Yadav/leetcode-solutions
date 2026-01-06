class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            if (isSelfDividing(i))
                ans.push_back(i);
        }
        return ans;
    }

private:
    bool isSelfDividing(int n) {
        int m = n; 
        while (n) {
            int rem = n % 10;
            if (rem == 0 || m % rem != 0)
                return false;
            n /= 10;
        }
        return true;
    }
};