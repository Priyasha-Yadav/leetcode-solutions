class Solution {
public:
    int reverseBits(int n) {
        int res = 0;
        string rev = "";
        while (n) {
            rev += to_string(n % 2);
            n /= 2;
        }
        int r = rev.length();
        while (rev.length() < 32)
            rev += '0';
        for (int i = 0; i < r; i++) {
            if (rev[i] == '1')
                res += pow(2, rev.length() - i - 1);
        }
        return res;
    }
};