class Solution {
public:
    int numSteps(string s) {
        int c = 0;
        int l = s.length();
        while (l > 1) {
            if (s[l - 1] == '1') {
                plusOne(s);
                 c++;
            }
            s.pop_back();
            l = s.length();
            c++;
        }
        return c;
    }

private:
    void plusOne(string& s) {
        int i = s.length() - 1;
        while (i > 0 && s[i] != '0') {
            s[i] = '0';
            i--;
        }
        if (i == 0) {
            s[i] = '0';
            s = "1" + s;
        } else
            s[i] = '1';
        cout << s << endl;
    }
};