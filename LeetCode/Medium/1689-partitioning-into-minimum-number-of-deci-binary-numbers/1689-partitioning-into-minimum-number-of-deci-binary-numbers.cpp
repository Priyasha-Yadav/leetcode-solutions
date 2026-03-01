class Solution {
public:
    int minPartitions(string n) {
        char m = '0';
        for (char c : n) {
            if (c > m)
                m = c;
        }
        return int(m - '0');
    }
};