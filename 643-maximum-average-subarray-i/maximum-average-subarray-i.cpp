class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double sum=0;

        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double maxsum=sum;
        double maxavg=maxsum/k;

        for(int j=k;j<n;j++){
            sum+=nums[j];
            sum-=nums[j-k];
            maxsum=max(maxsum,sum);
        }
        return maxsum/k;
    }
};