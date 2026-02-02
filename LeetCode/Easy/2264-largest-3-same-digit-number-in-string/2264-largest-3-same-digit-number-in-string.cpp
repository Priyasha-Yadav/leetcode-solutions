class Solution {
public:
    string largestGoodInteger(string num) {
        char best = 0;

        for (int i = 0; i + 2 < num.size(); i++) {
            if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                best = max(best, num[i]);
            }
        }
        
        if (best == 0) return "";
        return string(3, best);
    }
};
