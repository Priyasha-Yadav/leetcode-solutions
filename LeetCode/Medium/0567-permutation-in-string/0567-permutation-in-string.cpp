class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size())
            return false;

        map<char, int> need;
        for (char c : s1)
            need[c]++;

        map<char, int> window;

        int k = s1.size();

        for (int i = 0; i < k; i++)
            window[s2[i]]++;

        auto same = [&]() { return need == window; };

        if (same())
            return true;

        for (int i = k; i < s2.size(); i++) {

            window[s2[i]]++;

            char oldChar = s2[i - k];
            window[oldChar]--;
            if (window[oldChar] == 0)
                window.erase(oldChar);

            if (same())
                return true;
        }

        return false;
    }
};
