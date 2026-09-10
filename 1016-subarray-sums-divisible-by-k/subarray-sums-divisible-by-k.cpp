class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int n=nums.size();
        unordered_map<int,int> mp;
        mp[0]=1;
        int ps=0;
        int cnt=0;

        for(int x:nums){
            ps+=x;
            int rem=((ps%k)+k)%k;

            if(mp.find(rem)!=mp.end()) cnt+=mp[rem];
            mp[rem]++;
        }
        return cnt;
    }
};