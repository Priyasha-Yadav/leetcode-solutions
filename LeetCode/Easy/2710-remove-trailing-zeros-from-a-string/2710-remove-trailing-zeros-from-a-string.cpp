class Solution {
public:
    string removeTrailingZeros(string num) {
            while(num[num.length() - 1] == '0'){
                num = num.substr(0, num.length() - 1);
            }
            return num;
    }
};