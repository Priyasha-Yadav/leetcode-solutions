class Solution {
public:
    bool isBalanced(string num) {
        int odd = 0, even = 0;
        for (int i = 0; i < num.length(); i++) {
            if (i % 2 == 0)
                even += num[i] - '0';
            else
                odd += num[i] - '0';
        }
        cout << odd << " " << even;
        return odd == even;
    }
};