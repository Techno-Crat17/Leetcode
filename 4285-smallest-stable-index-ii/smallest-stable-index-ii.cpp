class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n=nums.size();
        vector<int> rightmin(nums.size(),INT_MAX);
        rightmin[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            rightmin[i]=min(nums[i],rightmin[i+1]);
        }

        vector<int>left(n,INT_MIN);
       left[0] = nums[0]; 
        for (int i = 1; i < n; i++) {
            left[i] = max(nums[i], left[i - 1]);
        }

        for(int i=0;i<n;i++){
            if(left[i]-rightmin[i]<=k) return i;
        }
        return -1;
    }
};