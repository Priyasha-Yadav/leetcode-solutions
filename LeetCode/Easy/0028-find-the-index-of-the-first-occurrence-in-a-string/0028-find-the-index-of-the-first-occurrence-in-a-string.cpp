class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty())
            return 0;

        if (haystack.size() < needle.size())
            return -1;

        int h = 0, n = 0, idx = -1;

        while (h < haystack.size()) {
            if (haystack[h] == needle[n]) {
                if (idx == -1)
                    idx = h;
                h++;
                n++;
                if (n == needle.size())
                    return idx;
            } else {
                if (idx != -1)
                    h = idx + 1;
                else
                    h++;

                idx = -1;
                n = 0;
            }
        }
        return -1;
    }
};
