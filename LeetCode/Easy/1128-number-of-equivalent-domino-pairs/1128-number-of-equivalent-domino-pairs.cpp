class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int, int>, int> count;
        int total_pairs = 0;

        for (auto& domino : dominoes) {
            int a = domino[0];
            int b = domino[1];
            // Normalize: smaller number first
            pair<int, int> key = {min(a, b), max(a, b)};
            total_pairs += count[key]; // add the number of previous occurrences
            count[key]++;              // increment count for this domino
        }

        return total_pairs;
    }
};