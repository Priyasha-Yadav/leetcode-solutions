class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int c = 0;
        while (n) {
            int r = n % 10;
            if (num % r == 0)
                c++;
            n /= 10;
        }
        return c;
    }
};