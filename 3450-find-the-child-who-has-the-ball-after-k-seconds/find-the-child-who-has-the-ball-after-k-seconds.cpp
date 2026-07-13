class Solution {
public:
    int numberOfChild(int n, int k) {
        int cyc = 2 * (n - 1);
        k %=cyc;

        if(k<=n-1) return k;
        else return (n-1)-(k-(n-1));

        
    }
};