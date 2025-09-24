class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0;
        int end = s.size() - 1;
        while(end > st){
            swap(s[end], s[st]);
            end--;
            st++;
        }
        
    }
};