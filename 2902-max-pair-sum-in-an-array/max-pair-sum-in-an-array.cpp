class Solution {
public:
    int maxSum(vector<int>& nums) {

        vector<int> largest(10,-1);//track all digits
        int ans=-1;
        for(int x:nums){
            int maxd=getMaxDigit(x);//finding max digit in no.
            if(largest[maxd]!=-1){//if that no again repeat ,pair can be formed
                ans=max(ans,x+largest[maxd]);//adding prev largest and current for max digit
            }
            largest[maxd]=max(largest[maxd],x);//update
        }

        return ans;
        
    }
    private:
    int getMaxDigit(int num) {
        int maxDigit = 0;

        while (num > 0) {
            maxDigit = max(maxDigit, num % 10);
            num /= 10;
        }

        return maxDigit;
    }
};