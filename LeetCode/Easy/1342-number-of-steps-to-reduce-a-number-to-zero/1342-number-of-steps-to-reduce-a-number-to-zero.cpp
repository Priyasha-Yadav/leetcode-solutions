class Solution {
public:
    int numberOfSteps(int num) {
        int count = steps(0, num);
        return count;
    }

private:
    int steps(int count, int num) {
        if (num == 0)
            return count;
        if (num % 2 == 0) {
            count++;
            return steps(count, num /= 2);
        };
        if (num % 2 == 1) {
            count++;
            return steps(count, num -= 1);
        }
        return count;
    }
};