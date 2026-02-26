class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> last(3, -1);
        int count = 0;

        for (int i = 0; i < s.length(); i++) {
            last[s[i] - 'a'] = i;

            if (last[0] != -1 && last[1] != -1 && last[2] != -1) {
                count += 1 + min(last[0], min(last[1], last[2]));
            }
        }

        return count;
    }
};