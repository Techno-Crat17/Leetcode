class Solution {
public:
    int minOperations(vector<int>& nums, int x) {

        int n=nums.size();
        int TS=0;
        for(int x:nums) TS+=x;

        int target=TS-x;
        int l=0,r=0;
        int sum=0;
        int maxlen=0;

        bool targetflag=false;

        while(r<n){
            sum+=nums[r];
            while(l<=r && sum>target){
                sum-=nums[l];
                l++;

            }

            if(sum==target) {
                targetflag=true;
                maxlen=max(maxlen,r-l+1);
            }

            r++;
        }
        if(targetflag) return n-maxlen;
        return -1;
        
        
    }
};