class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        int n = num.size();
        int i = 0, j = 1;
        int m = INT_MIN;
        while (i < n && j < n) {
            if (num[i] == num[j])
                j++;
            else {
                i++;
                j++;
            }
            if (j - i + 1 == 3 && j < n && num[i] == num[j]) {
                cout << i << j << endl;
                m = max(m, num[i] - '0');
            }
        }
        if (m != INT_MIN) {
            string s = to_string(m);
            ans = ans + s + s + s;
        }
        return ans;
    }
};