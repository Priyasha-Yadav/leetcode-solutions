class Solution {
public:
    int numSteps(string s) {
        int steps = 0;

        while (s.length() > 1) {
            if (s.back() == '1') {
                plusOne(s);
                steps++;
            }

            s.pop_back();  // divide by 2
            steps++;
        }

        return steps;
    }

private:
    void plusOne(string& s) {
        int i = s.length() - 1;

        while (i >= 0 && s[i] == '1') {
            s[i] = '0';
            i--;
        }

        if (i < 0) {
            s = "1" + s;
        } else {
            s[i] = '1';
        }
    }
};