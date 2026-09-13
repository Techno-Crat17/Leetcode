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
                l++;//l ab start and non zero ele pe hai
            }

            // Lekin ek zero (ya ek element) compulsory delete karna hai,(ws=r-l+1)
            // isliye remaining length = (r - l + 1) - 1 = (r - l)
            maxlen=max(r-l,maxlen);
            r++;
        }

        return maxlen;
        
    }
};