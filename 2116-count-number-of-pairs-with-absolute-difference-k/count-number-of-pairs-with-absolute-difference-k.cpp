class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int cnt=0;
        for(int x:nums){
            cnt+=freq[x-k]+freq[x+k];
            freq[x]++;
        }
        return cnt;
    }
};