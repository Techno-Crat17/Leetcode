class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0) nums[i]=-1;
            else nums[i]=1;
        }
        unordered_map<int,int>mp;
        int ps=0,maxlen=0;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            ps+=nums[i];
            
            if(mp.find(ps)!=mp.end()) maxlen=max(maxlen,i-mp[ps]);
            if(mp.find(ps)==mp.end()){
                mp[ps]=i;
            }
        }

        return maxlen;
        
    }
};