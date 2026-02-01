class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> res;
        for (string s : strs) {
            string str = s;
            sort(str.begin(), str.end());
            m[str].push_back(s);
        }
        for (auto it : m) 
            res.push_back(it.second);
        return res;
    }
};