class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n=nums.size();
        long long ps=0;
        for(int i=0;i<n;i++){
            ps+=nums[i];
        }

        int k=ps%p;
        if(k==0) return 0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        ps=0;
        int minlen=n;
        for(int i=0;i<n;i++){
            ps+=nums[i];
            int curr_rem=ps%p;
            int target=(curr_rem-k+p) % p;
            if(mp.find(target)!=mp.end()){
                minlen=min(minlen,i-mp[target]);
            }
            mp[curr_rem]=i;

        }
        return minlen < n ? minlen : -1;
        
    }
};