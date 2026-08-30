class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int minidx=0,maxidx=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<nums[maxidx]) maxidx=i;
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[minidx]) minidx=i;
        }

        //three cases
        //both from left or right or one left one right
        // calc no of deletions for left we need maxidx from start so that both delted
        //for right ulta
        int left=max(maxidx,minidx)+1;//no of deletions
        int right=nums.size()-min(maxidx,minidx);
        int both=min(maxidx,minidx)+1 + (nums.size()-max(maxidx,minidx));

        return min({left,both,right});
    }
};