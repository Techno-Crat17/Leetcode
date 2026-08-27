class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
       
        for(int x:nums) mp[x]++;

        // f isliye check ho rahi hai ki window bas ek baar apper ,in whole window case every ele in a window so freq dn matter

        if(k==1){//first ele
            int ans=-1;

            for(auto &[x,f]:mp){
                if(f==1) ans=max(ans,x);
            }
            return ans;
        }

        if(k==nums.size()){//whole window 
            return *max_element(nums.begin(),nums.end());
        }

        //any ele other first and last always appers more than 1 times in subarrays
        int ans=-1;
        int firstcnt=count(nums.begin(),nums.end(),nums[0]);//counting freq of nums[0]
        if(firstcnt==1) ans=max(ans,nums[0]);

        int lastcnt=count(nums.begin(),nums.end(),nums[nums.size()-1]);//counting freq of nums[n-1]
        if(lastcnt==1) ans=max(ans,nums[nums.size()-1]);

        return ans;

        
    }
};