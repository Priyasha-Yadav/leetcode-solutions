class Solution {
public:
    bool hasAlternatingBits(int n) {
        string s = convertTobinary(n);
        for(int i = 0 ; i < s.length() - 1; i++){
            if(s[i] == s[i+1]) return false;
        }
        return true;
    }

private:
    string convertTobinary(int n) {
        string res = "";
        while (n) {
            int r = n % 2;
            res += char(r + '0');
            n /= 2;
        }
        return res;
    }
};