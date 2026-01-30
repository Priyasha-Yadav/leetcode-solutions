class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int p = 0;
        for (int i = 0; i < gain.size(); i++) {
            int curr = gain[i];
            gain[i] = p;
            p += curr;
        }
        int max = INT_MIN;
        for (int i : gain) {
            if (i > max)
                max = i;
        }
        return max;
    }
};