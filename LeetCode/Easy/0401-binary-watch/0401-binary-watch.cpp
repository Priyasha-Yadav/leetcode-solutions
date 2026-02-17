class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> res;
        for (int h = 0; h <= 11; h++) {
            for (int m = 0; m <= 59; m++) {
                string time = "";
                int sum = countBits(h) + countBits(m);
                if (sum == turnedOn) {
                    time += to_string(h);
                    time += ':';
                    if (m == 0)
                        time += "00";
                    else if (m < 10)
                        time += "0" + to_string(m);
                    else
                        time += to_string(m);
                    res.push_back(time);
                }
            }
        }
        return res;
    }
    int countBits(int n) {
        int c = 0;
        while (n) {
            if (n % 2 == 1)
                c++;
            n /= 2;
        }
        return c;
    }
};