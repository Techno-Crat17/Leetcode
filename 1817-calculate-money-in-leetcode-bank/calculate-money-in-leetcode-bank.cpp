class Solution {
public:
    int totalMoney(int n) {

        int ans = 0;
        int monday = 1;

        // Week 1: 1 2 3 4 5 6 7
        // Week 2: 2 3 4 5 6 7 8
        // Week 3: 3 4 5 6 7 8 9
        
        while (n > 0) {
            for (int day = 0; day < min(n, 7); day++) {
                ans += monday + day;
            }
            
            n -= 7;
            monday++;
        }
        
        return ans;
        
    }
};