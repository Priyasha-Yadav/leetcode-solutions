class Solution {
public:
    int bitwiseComplement(unsigned n) {
        if(n == 0) return 1;
        int mask = 1;
        mask <<= bit_width(n);
        return (mask - 1) ^ n;
    }
};