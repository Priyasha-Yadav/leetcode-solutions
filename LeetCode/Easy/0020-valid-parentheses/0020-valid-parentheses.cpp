class Solution {
public:
    bool isValid(string s) {
        stack<char> charStack;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                charStack.push(c);
            } else {
                if (charStack.empty()) return false;

                char top = charStack.top();
                if ((c == ')' && top == '(') ||
                    (c == ']' && top == '[') ||
                    (c == '}' && top == '{')) {
                    charStack.pop();
                } else {
                    return false;
                }
            }
        }

        return charStack.empty();
    }
};
