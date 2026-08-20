class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans=0;
        int cnt=0;
        for(int bidx=0;bidx<32;bidx++){//for every bit
            cnt=0;
            for(int i=0;i<nums.size();i++){//checking(set ) cnt every no at particular bit
                if(nums[i] & (1<<bidx)) cnt++;
            }

            if(cnt%3==1){ //setting that bit isnt multiple of 3
                ans=ans | (1<<bidx);

            }

        }
        return ans;
    }
};