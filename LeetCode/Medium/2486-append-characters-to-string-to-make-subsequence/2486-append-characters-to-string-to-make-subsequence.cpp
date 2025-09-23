class Solution {
public:
    int appendCharacters(string s, string t) {
     int tCount = 0;
     for(int i = 0; i< s.length(); i++){
        if(t[tCount] == s[i]){
            tCount++;
        }
        if(tCount == t.length()) break;
     } 
     return t.length() - tCount;  
    }
};