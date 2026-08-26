class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = "";
        int ones = 0;
        int l = 0;

        for (int r = 0; r < s.size(); r++) {
            if (s[r] == '1')
                ones++;

            
            while (ones > k) {// all valid window checks
                if (s[l] == '1')
                    ones--;
                l++;
            }

           
            if (ones == k) {
                // Remove leading zeroes
                while (s[l] == '0')
                    l++;

                string cur = s.substr(l, r - l + 1);

                if (ans.empty() ||
                    cur.size() < ans.size() ||
                    (cur.size() == ans.size() && cur < ans)) {
                    ans = cur;
                }
            }
        }

        return ans;
    }
};