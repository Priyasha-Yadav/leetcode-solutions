class Solution {
public:
    bool isValid(string s) {
        stack<char> check;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                check.push(c);
            } else {
                 if (check.empty()) return false;
                if (c == ')' && check.top() == '(' ||
                    c == ']' && check.top() == '[' ||
                    c == '}' && check.top() == '{')
                    check.pop();
                else
                    return false;
            }
        }
        return check.empty();
    }
};