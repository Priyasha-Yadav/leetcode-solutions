class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        int h = 0 , n = 0;
        int start = 0;

        while(h < haystack.size()){
            if(haystack[h] == needle[n]){
                n++;
                h++;
                if(n == needle.size()) return start;
            }else{
                start++;
                h = start;
                n = 0;
            }                          
        }
        return -1;
    }
};