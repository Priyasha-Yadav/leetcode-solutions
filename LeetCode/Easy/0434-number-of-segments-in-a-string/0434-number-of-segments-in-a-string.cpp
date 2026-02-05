class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        bool inWord = false;

        for (char c : s) {
            if (c != ' ') {
                if (!inWord) {
                    count++;
                    inWord = true;
                }
            } else {
                inWord = false;
            }
        }
        return count;
    }
};
