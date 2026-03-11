class Solution {
public:
    int findComplement(unsigned num) {
        long long mask = 1;
        mask <<= bit_width(num);
        return (mask - 1) ^ num;
    }
};