class Solution {
public:
    bool judgeSquareSum(int c) {
        long long x=0;
        long long y=sqrt(c);

        while(x<=y){
            long long sum=x*x+y*y;
            if(sum==c) return true;
            else if(sum < c) x++;
            else y--;
        }

        return false;
        
    }
};