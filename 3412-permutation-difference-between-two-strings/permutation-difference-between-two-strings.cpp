class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int pos[26] = {0};

        // Store the position of each character in s
        for (int i = 0; i < s.length(); i++) {
            pos[s[i] - 'a'] = i;
        }

        int ans = 0;

        // Compare each character's position in s and t
        for (int i = 0; i < t.length(); i++) {
            char ch = t[i];

            int positionInS = pos[ch - 'a'];
            int positionInT = i;

            ans += abs(positionInS - positionInT);
        }

        return ans;
    }
};