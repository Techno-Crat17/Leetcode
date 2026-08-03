class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {

        int n=nums.size();
        long long cnt=0;
        int p=modulo;
        int curr_cnt=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            if(nums[i]%p==k) curr_cnt++;
            int curr_rem=curr_cnt % p;
            int target=(curr_rem-k+p) % p;
            if(mp.find(target)!=mp.end()) cnt+=mp[target];
            mp[curr_rem]++;
        }
        return cnt;
    }
};