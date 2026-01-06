class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        string first = "qwertyuiop";
        string second = "asdfghjkl";
        string third = "zxcvbnm";
        for (string s : words) {
            string curr = toLower(s);
            string row;
            if (first.find(curr[0]) != string::npos)
                row = first;
            else if (second.find(curr[0]) != string::npos)
                row = second;
            else
                row = third;

            bool check = false;
            for (char c : curr) {
                if (row.find(c) == string::npos)
                    check = true;
            }
            if (!check)
                ans.push_back(s);
        }
        return ans;
    }

private:
    string toLower(string s) {
        string result = "";
        for (char c : s) {
            if (c >= 'A' && c <= 'Z')
                result += c + 32;
            else
                result += c;
        }
        return result;
    }
};