class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        
       
        vector<int> s = {a, b, c};
        sort(s.begin(), s.end());

        int x = s[0];
        int y = s[1];
        int z = s[2];


        // Total empty positions = z - x - 2.
        int mx = z - x - 2;

        int mn;

        // Stones are already consecutive.
        if (y - x == 1 && z - y == 1) {
            mn = 0;
        }

        // Case 2: One stone can be moved directly into the gap.
        // Examples:
        // 1 3 4  -> move 1 to 2
        // 1 2 4  -> move 4 to 3
        //
        // Also handles cases like:
        // 1 2 5  -> move 5 to 3
        // 1 5 6  -> move 1 to 4
        else if (y - x == 2 || z - y == 2 ||
                 (y - x == 1 && z - y > 2) ||
                 (z - y == 1 && y - x > 2)) {
            mn = 1;
        }

        // Case 3: We need two moves.
        // Example: 1 4 7
        else {
            mn = 2;
        }

        return {mn, mx};
    }
};