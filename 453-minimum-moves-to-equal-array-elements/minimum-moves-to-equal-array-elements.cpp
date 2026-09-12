class Solution {
public:
    int minMoves(vector<int>& nums) {

        int n=nums.size();

        sort(nums.begin(),nums.end());
        int min=*min_element(nums.begin(),nums.end());
        int sum=accumulate(nums.begin(), nums.end(), 0);

        
        int ans=sum-min*n;//pure maths hai

        return ans;
        
    }
};