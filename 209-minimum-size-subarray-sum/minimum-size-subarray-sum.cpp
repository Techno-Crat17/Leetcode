class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int r=0 ;
        int minlen=INT_MAX;
        int n=nums.size();
        int sum=0;
        while(r < n){
            sum=sum+nums[r];
            while(sum>=target){
                minlen=min(minlen,r-l+1);
                sum=sum-nums[l];
                l++;
            }
        
            r++;
        }

        return (minlen==INT_MAX) ? 0 : minlen;
        
    }
};