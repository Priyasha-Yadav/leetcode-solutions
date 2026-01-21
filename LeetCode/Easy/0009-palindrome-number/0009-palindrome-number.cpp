class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || x != 0 && x % 10 == 0)
            return false;
        int rh = 0, n = x;
        while (rh < n) {
            rh = rh * 10 + n % 10;
            n /= 10;
        }
        return n == rh || n == rh / 10;
    }
};