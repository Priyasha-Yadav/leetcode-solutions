class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return backspace(s) == backspace(t);
    }

private:
    string backspace(string& s) {
        stack<char> st;
        for (char c : s) {
            if (!st.empty() && c == '#')
                st.pop();
            if (c != '#')
                st.push(c);
        }
        string str = "";
        while (!st.empty()) {
            str += st.top();
            st.pop();
        }
        return str;
    }
};