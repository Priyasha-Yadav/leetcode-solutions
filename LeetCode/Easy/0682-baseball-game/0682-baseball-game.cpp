class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int count = 0;
        for (string c : operations) {
            if (c == "C") {
                count -= s.top();
                s.pop();
            } else if (c == "D") {
                int i = s.top() * 2;
                count += i;
                s.push(i);
            } else if (c == "+") {
                int temp = s.top();
                s.pop();
                int add = temp + s.top();
                s.push(temp);
                s.push(add);
                count += add;
            } else {
                int i = stoi(c);
                s.push(i);
                count += i;
            }
        }
        return count;
    }
};