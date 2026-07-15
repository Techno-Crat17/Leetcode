class Solution {
public:
    int fibb(int n ,vector<int> & dpp){
        if(n<=1) return n;
        if(dpp[n]!=-1) return dpp[n];
        return dpp[n]=fibb(n-1,dpp)+fibb(n-2,dpp);
    }
    int fib(int n) {
        vector<int> dpp(n+1,-1);
        return fibb(n,dpp);
        
    }
};