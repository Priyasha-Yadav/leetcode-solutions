class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> m;
        if(n < 10) return n;
        for (int i = 1; i <= n; i++) {
            int curr = 0;
            if (i < 10)
                curr = i;
            else
                curr = sumOfDigits(i);
            m[curr]++;
        }
        int max = INT_MIN;
        for (auto itr : m)
            if (itr.second > max)
                max = itr.second;
        int c = 0;
        for (auto itr : m)
            if (itr.second == max)
                c++;
        return c;
    }

private:
    int sumOfDigits(int n) {
        int sum = 0;
        while (n) {
            int r = n % 10;
            sum += r;
            n /= 10;
        }
        return sum;
    }
};