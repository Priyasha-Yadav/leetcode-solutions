class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string str = "";
        str.resize(indices.size());
        for (int i = 0; i < s.length(); i++) {
            str[indices[i]] = s[i];
        }
        return str;
    }
};