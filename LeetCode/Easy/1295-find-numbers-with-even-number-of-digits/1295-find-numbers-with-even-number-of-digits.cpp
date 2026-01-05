class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for (int i : nums) {
            if (countDigits(i) % 2 == 0)
                ans++;
        }
        return ans;
    }

private:
    int countDigits(int n) {
        int count = 0;
        while (n) {
            n /= 10;
            count++;
        }
        return count;
    }
};