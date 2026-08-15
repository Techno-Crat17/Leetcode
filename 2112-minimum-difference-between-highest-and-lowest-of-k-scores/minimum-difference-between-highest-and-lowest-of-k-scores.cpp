class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==1) return 0;
        int n=nums.size();

        sort(nums.begin(),nums.end());
        int min_diff=INT_MAX;

        for(int i=0;i<=n-k;i++){
            int cd=nums[i+k-1]-nums[i];// The k-th element from 0-indexed start position 'i' sits exactly k - 1 steps ahead at index 'i + k - 1'.`


        min_diff = min(min_diff, cd);
        }
        
        return min_diff;

        
    }
};