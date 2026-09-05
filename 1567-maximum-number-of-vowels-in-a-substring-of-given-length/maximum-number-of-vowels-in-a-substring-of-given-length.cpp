class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();

        set<char> st = {'a', 'e', 'i', 'o', 'u'};
        int cnt = 0;
        for (int i = 0; i < k; i++) {
            if (st.count(s[i]))
                cnt++;
        }

        int maxcnt = cnt;

        for (int j = k; j <  n ; j++) {
            if (st.count(s[j]))
                cnt++;
            if (st.count(s[j - k]))
                cnt--;

            maxcnt = max(maxcnt, cnt);
           
        }

        return maxcnt;
    }
};