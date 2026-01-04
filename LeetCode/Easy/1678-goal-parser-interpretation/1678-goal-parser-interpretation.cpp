class Solution {
public:
    string interpret(string command) {
        string res = "";
        for (int i = 0; i < command.length(); i++) {
            if (command[i] == 'G')
                res += "G";
            else if (command[i] == '(' && command[i + 1] == ')' &&
                     i + 1 < command.length()) {
                res += "o";
                i += 1;
            } else {
                res += "al";
                i += 3;
            }
        }
        return res;
    }
};