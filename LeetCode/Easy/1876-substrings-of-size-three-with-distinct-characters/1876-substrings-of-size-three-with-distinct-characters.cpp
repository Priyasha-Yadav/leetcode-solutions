class Solution {
public:
    int countGoodSubstrings(string s) {
      int n = s.size();
      if(n < 3) return 0;
      int c = 0, r = 0;
      while(r < n - 2){
        if(s[r] != s[r+1] && s[r] != s[r+2] && s[r+1] != s[r+2]) c++;
        r++;
      }
      return c;
    }
};