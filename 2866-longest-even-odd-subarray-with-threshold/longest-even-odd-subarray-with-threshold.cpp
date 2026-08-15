class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int r;
        int l=r=0;
        int n=nums.size();
        int maxlen=0;

        while(l<n){
            //finding suitable starting pt
            if(nums[l]%2!=0 || nums[l]>threshold){
                l++;
                continue;
            }

            r=l;
            //since r is aldready valid from prev cond so r+1 is checked and CORRECT: Checks candidate element nums[r+1] before allowing r++
            while(r<n-1 && nums[r+1]<=threshold &&(nums[r]%2!=nums[r+1]%2)) r++;

            maxlen=max(maxlen,r-l+1);

            l=r+1;// r is at last valid idx ,so new valid pt r+1

        }
        return maxlen;
    }
};