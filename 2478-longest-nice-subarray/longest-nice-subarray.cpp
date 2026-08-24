class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {

        int left=0,ans=0,mask=0;

        for(int right=0;right<nums.size();right++){
            while((mask & nums[right])!=0){// mask=011 and right=101 and =001(one common set bit)
                mask^=nums[left];// remove(unset) the bit set by left
                left++;

            }
            mask |=nums[right];//mask track bit being set(ex: 001 010 100 using mask =111)
            ans=max(ans,right-left+1);
            }
        return ans;
    }
};