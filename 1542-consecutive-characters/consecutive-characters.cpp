class Solution {
public:
    int maxPower(string s) {

        int maxlen = 0;
        int l = 0;
        int r = 0;

        while (r < s.size()) {

            if (s[l] != s[r])
                l = r; // r at unique character(start)

            maxlen = max(r - l + 1, maxlen);
            r++;
        }

        return maxlen;
    }
};