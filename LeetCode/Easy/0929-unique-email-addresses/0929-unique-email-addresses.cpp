class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string, bool> m;
        for (string e : emails) {
            string email = localName(e) + domain(e);
            m[email] = true;
        }
        return m.size();
    }

private:
    string localName(string s) {
        string res = "";
        for (char c : s) {
            if (c == '.')
                continue;
            else if (c == '+' || c == '@')
                break;
            else
                res += c;
        }
        return res;
    }

private:
    string domain(string s) {
        int idx = 0;
        while (1)
            if (s[idx++] == '@')
                break;
        return s.substr(idx+1);
    }
};