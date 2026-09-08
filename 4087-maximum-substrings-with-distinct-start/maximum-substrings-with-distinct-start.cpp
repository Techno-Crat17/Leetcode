class Solution {
public:
    int maxDistinct(string s) {
        bool seen[26] = {false};
        int count = 0;
        for (int i=0; i<s.size(); i++) {
            int idx = s[i] - 'a';
            if (!seen[idx]) {
                seen[idx] = true;
                count += 1;
            }
        }
        return count;
    }
};