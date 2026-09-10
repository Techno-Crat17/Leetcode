class Solution {
public:
    int longestPalindrome(string s) {

        map<char, int> mp;

        for (char x : s)
            mp[x]++;

        int cnt = 0;
        bool oddflag = false;

        for (auto [key, value] : mp) {
            if (value % 2 == 0)
                cnt += value;

            if (value % 2 == 1) {
                if (oddflag != true) {//only one odd freq used
                    oddflag = true;
                    cnt += value;
                } else
                    cnt += value - 1;// after finding find first odd freq and we -1 to make it even count
            }
        }

        return cnt;
    }
};