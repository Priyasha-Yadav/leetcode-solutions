class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0, end = s.length() -1;
        while(st < end){
            if(isAlphaNum(s[st])){
                  if(isAlphaNum(s[end])){
                    if(tolower(s[st]) == tolower(s[end])){
                        st++;
                        end--;
                    }
                    else return false;
                  }
                  else end--;
            }
            else st++;
        }
        return true;
    }

private:
    bool isAlphaNum(char c) {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' ||
            c >= '0' && c <= '9')
            return true;
        return false;
    }
};