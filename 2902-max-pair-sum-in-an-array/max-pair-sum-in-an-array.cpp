class Solution {
public:
    int maxSum(vector<int>& nums) {

        vector<int> largest(10,-1);
        int ans=-1;
        for(int x:nums){
            int maxd=getMaxDigit(x);
            if(largest[maxd]!=-1){
                ans=max(ans,x+largest[maxd]);
            }
            largest[maxd]=max(largest[maxd],x);
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