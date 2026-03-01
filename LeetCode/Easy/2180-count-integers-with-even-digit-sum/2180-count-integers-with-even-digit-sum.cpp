class Solution {
public:
    int countEven(int num) {
        int c = 0;
        for (int i = 2; i <= num; i++) {
            if(evenDigitsum(i)) c++;
        }
        return c;
    }

private:
    bool evenDigitsum(int n) {
        int s = 0;
        while (n) {
            s += n % 10;
            n /= 10;
        }
        return s % 2 == 0;
    }
};