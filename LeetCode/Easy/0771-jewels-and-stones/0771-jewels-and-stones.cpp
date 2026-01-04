class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        map<char, int> m;
        for (char c : jewels) {
            m[c]++;
        }
        for (char c : stones) {
            if (m[c] == 1)
                count++;
        }
        return count;
    }
};