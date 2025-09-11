class Solution {
public:
    void reverseString(vector<char>& s, int left, int right) {
        if (left >= right) return;
        std::swap(s[left], s[right]);
        reverseString(s, left + 1, right - 1);
    }
    
    void reverseString(vector<char>& s) {
        reverseString(s, 0, s.size() - 1);
    }
};
