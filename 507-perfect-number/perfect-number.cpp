class Solution {
public:
    bool checkPerfectNumber(int num) {

        if(num<=1) return false;

        //ignoring case 1 as num*1=num will fecth num as divisor

        int sum=1;//always divisor

        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                sum+=i;
                if(i*i!=num) sum+=num/i;
            }

        }

return sum==num;
        
    }
};