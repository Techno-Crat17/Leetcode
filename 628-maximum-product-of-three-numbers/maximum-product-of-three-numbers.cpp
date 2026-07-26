class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a,b,c,d,e;
         a=b=c=INT_MIN;
        d=e=INT_MAX;

        for(int x:nums){
            if(x>a){
                c=b;
                b=a;
                a=x;
            }
            else if(x>b){
                c=b;
                b=x;
            }
            else if(x>c){
                c=x;
            }

            if(x<d){
                e=d;
                d=x;
            }
            else if(x<e){
                e=x;
            }
        }
        return max(a*b*c,a*d*e);
    }
};