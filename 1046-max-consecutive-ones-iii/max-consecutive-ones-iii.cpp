class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zerocnt=0;
        int i=0;
        int maxlen=0;


        for(int j=0;j<nums.size();j++){
            if(nums[j]==0) zerocnt++;
            if(zerocnt>k){
                if(nums[i]==0){
                zerocnt--;
                }
                i++;
            }

            maxlen=max(maxlen,j-i+1);
        }
        return maxlen;

        
    }
};