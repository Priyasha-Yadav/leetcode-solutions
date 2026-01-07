class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.length();
            while(n){
               if(num[n-1] == '0') n--;
               else break;
            }
            return num.substr(0, n);
    }
};