class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string prefix = strs[0];
        for (string s : strs) {
            while (s.find(prefix) != 0) {
                prefix.pop_back();
                if (prefix == "")
                    break;
            }
        }
        return prefix;
    }
};