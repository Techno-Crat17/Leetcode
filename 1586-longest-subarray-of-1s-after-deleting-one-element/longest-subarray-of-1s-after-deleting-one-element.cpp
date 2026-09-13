class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int zerocnt=0;
        int maxlen=0;
        int n=nums.size();
        int l=0,r=0;

        while(r<n){
            if(nums[r]==0){
                zerocnt++;
            }

            while(zerocnt>1){
                if(nums[l]==0) zerocnt--;
                l++;
            }

            maxlen=max(r-l,maxlen);
            r++;
        }

        return maxlen;
        
    }
};