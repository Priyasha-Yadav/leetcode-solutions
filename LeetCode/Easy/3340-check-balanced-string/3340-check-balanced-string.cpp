class Solution {
public:
    bool isBalanced(string num) {
        int odd = 0, even = 0;
        for (int i = 0; i < num.length(); i++) {
            if (i % 2 == 0)
                even += '0' - num[i];
            else
                odd += '0' - num[i];
        }
        cout << odd << " " << even;
        return odd == even;
    }
};