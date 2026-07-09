class Solution {
public:
    long long sumAndMultiply(int n) {
        
        int div=1;
        while(n/div >=10){
            div*=10;
        }

        long long x=0;
        long sum=0;

        while(div>0){
            int d=n/div;

            if(d!=0){
                x=x*10+d;
                sum+=d;
            }

            n%=div;

            div/=10;
        }

        return x * sum;
    }
};