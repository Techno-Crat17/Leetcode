class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int Lsum=0;
        int Totalsum=0;
        for(int i=0;i<n;i++) Totalsum+=nums[i];
        for(int i=0;i<n;i++){
            
            int Rsum=Totalsum-nums[i]-Lsum;
            if(Rsum==Lsum) return i;
             Lsum+=nums[i];
        }
        return -1;
    
        
    }
};