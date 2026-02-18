class Solution {
public:
    bool checkIfPangram(string sent) {
        unordered_map<char, int> m;
        for(char c : sent) m[c]++;
        return m.size() == 26;
    }
};