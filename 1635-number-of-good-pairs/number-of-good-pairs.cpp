class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
         cnt+=mp[nums[i]];
         mp[nums[i]]++;
        }
        return cnt;
    }
};