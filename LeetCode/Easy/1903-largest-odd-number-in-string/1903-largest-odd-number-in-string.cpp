class Solution {
public:
    string largestOddNumber(string num) {

        string result = "";
        for (int i = num.length() - 1; i >= 0; i--) {
            if (result.length() == 0 && (num[i] - '0') % 2 == 1)
                return num.substr(0, i + 1);
        }
        return result;
    }

};
