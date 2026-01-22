class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int c = 0;
        for (string s : patterns) 
            if (word.find(s) != string::npos)
                c++;  
        return c;
    }
};