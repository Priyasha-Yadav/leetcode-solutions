class Solution {
public:
    bool isSameAfterReversals(int num) {
        int number = num;
        int reverse = 0;
        int count = 0;
        while (num) {
            int rem = num % 10;
            reverse = reverse * 10 + rem;
            num /= 10;
            count++;
        }
        while (reverse) {
            reverse /= 10;
            count--;
        }
        return count == 0;
    }
};