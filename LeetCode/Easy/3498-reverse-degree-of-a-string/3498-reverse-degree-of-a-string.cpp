class Solution {
public:
    int reverseDegree(string s) {
        map<char, int> m;
        char c = 'a';
        for (int i = 26; i > 0; i--) {
            cout << c << " " << i << endl;
            m[c++] = i;
        }
        int sum = 0;
        for (int i = 1; i <= s.length(); i++) {
            sum += m[s[i - 1]] * i;
        }
        return sum;
    }
};