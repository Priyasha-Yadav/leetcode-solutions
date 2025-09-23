class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for(int i = s.length() -1 ; i >= 0; i--){
            if(count > 0 && s[i] == ' '){ break;}
            if(s[i] == ' '){
                continue;
            }
            else count++;


        }
        return count;
    }
};