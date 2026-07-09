class Solution {
public:
    long long sumAndMultiply(int n) {
        
        //brute force

        long long x=0;
        int sum=0;

        while(n>0){
            int d=n%10;
            if(d!=0){
                x=x*10+d;
                sum+=d;
            }
            n=n/10;
        }

        long long y=0;
        while(x>0){
            int d=x%10;
            y=y*10+d;
            x=x/10;
        }

        return sum*y;
    }
};