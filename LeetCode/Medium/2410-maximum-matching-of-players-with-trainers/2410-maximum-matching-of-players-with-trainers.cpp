class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int r = 0, l = 0;
        while (r < players.size() && l < trainers.size()) {
            if (players[r] <= trainers[l]) {
                r++;
                l++;
            } else
                l++;
        }
        return r; 
    }
};