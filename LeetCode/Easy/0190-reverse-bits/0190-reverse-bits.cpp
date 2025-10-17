class Solution {
public:
    int reverseBits(int n) {
        string res = "";
        int output = 0;
        while (n) {
            res += to_string(n % 2);
            n /= 2;
        }
        while (res.length() < 32) {
            res += '0';
        }
        for (int i = 0; i < res.length(); i++) {
            if(res[i] == '1'){
            output += pow(2, res.length() - i - 1);
            }
        }
        return output;
    }
};