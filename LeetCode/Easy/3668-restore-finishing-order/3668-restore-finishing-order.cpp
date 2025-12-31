class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        map<int, int> m;
        vector<int> seq;
        for (int i = 0; i < friends.size(); i++) {
            m[friends[i]]++;
        }
        for (int i = 0; i < order.size(); i++) {
            if (m.find(order[i]) != m.end())
                seq.push_back(order[i]);
        }
        return seq;
    }
};