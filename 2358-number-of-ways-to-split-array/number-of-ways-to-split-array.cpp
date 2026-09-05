class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();

        long long totalsum=0;
        long long Lsum=0;
        long long cnt=0;

        for(int i=0;i<n;i++) totalsum+=nums[i];

        for(int i=0;i<n-1;i++){
            Lsum+=nums[i];
            long long Rsum=totalsum-Lsum;
            if(Lsum>=Rsum) cnt++;
        }

        return cnt;
        
    }
};