class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,flips=0,maxlen=0;
        int n=nums.size();

        while(j<n){
            if(nums[j]==1) j++;
            else{
                if(flips<k){
                    flips++;
                    j++;
                }

                else{
                    maxlen=max(maxlen,j-i);//j not inc corr window 

                    while(nums[i]==1) i++;//i at leftmost 0 present in arr

                    i++;//one pos next after leftmost and free flip
                    flips--; 
                }
            }
        }

        maxlen=max(maxlen,j-i);
        return maxlen;
        
    }
};