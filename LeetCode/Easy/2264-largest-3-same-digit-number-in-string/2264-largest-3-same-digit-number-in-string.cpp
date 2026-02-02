class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        int n = num.size();
        int m = INT_MIN;
        for (int i = 1; i < n - 1; i++) {
            if (num[i] == num[i - 1] && num[i] == num[i + 1])
                m = max(m, num[i] - '0');
        }

        if (m != INT_MIN) {
            string s = to_string(m);
            ans = ans + s + s + s;
        }
        return ans;
    }
};