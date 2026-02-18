class Solution {
public:
    int countOperations(int num1, int num2) {
        if (num1 == 0 || num2 == 0)
            return 0;
        else if (num1 == num2)
            return 1;
        int c = 0;
        while (num1 && num2) {
            if (num1 > num2)
                num1 -= num2;
            else
                num2 -= num1;
        }
        return c;
    }
};