class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
         long long cnt=0;
        long long n=nums.size();
        long long totalpairs=(n*(n-1))/2;

        unordered_map< long long, long long> mp;
         
        for( long long i=0;i<n;i++){
            long long target=nums[i]-i;
         cnt+=mp[target];
         mp[target]++;
        }

        

        return totalpairs-cnt;
    }
};