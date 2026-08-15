class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minsum=INT_MAX;
        int n=nums.size();

        for(int k=l;k<=r;k++){
            //checking window size of length l and r
            int currentsum=0;
            for(int i=0;i<k;i++) currentsum+=nums[i];

            if(currentsum>0){
                minsum=min(minsum,currentsum);
            } 

            for(int j=k;j<n;j++){
                currentsum +=nums[j]-nums[j-k];//leftmost substracting
                if(currentsum>0){
                minsum=min(minsum,currentsum);
            } 
            }
        }

        
    

    return minsum == INT_MAX ? -1 : minsum;
    }
};