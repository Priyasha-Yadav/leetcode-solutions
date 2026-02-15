class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string str = "";
        int i = 0, j = 0;
        int n = s.size();
        cout<<n;
        while (i < n ) {
            if ( j < spaces.size() &&i == spaces[j]) {
                str += ' ';
                j++;

            } else {
                str += s[i];
                i++;
            }
        }
        return str;
    }
};