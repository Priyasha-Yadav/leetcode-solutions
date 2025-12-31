class Solution {
public:
    string largestOddNumber(string num) {
        if ((num[num.length() - 1] - '0') % 2 == 1)
            return num;
        string result = "";

        for (int i = num.length() - 1; i >= 0; i--) {
            if (result.length() == 0 && (num[i] - '0') % 2 == 1)
                return substr(i, num);
        }
        return result;
    }

private:
    string substr(int n, string num) {
        string res = "";
        for (int i = 0; i <= n; i++)
            res += num[i];

        return res;
    }
};
