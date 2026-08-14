class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int l, r = 0;
        unordered_map<char, int> hash;
        int maxlen = 0;
        while (r < n) {
             hash[s[r]]++;
            while (hash[s[r]] > 2) {
                hash[s[l]]--;
                l++;
            }
            maxlen = max(maxlen, r - l + 1);
           
            r++;
        }
        return maxlen;
    }
};