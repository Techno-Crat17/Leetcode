class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int j = 0; j < n; j++) {
            int x = abs(nums[j]); // Map value to its 1-based target index
            
            if(nums[x - 1] < 0) 
                ans.push_back(x); // Already negative means we've seen 'x' before (duplicate)
            else 
                nums[x - 1] = -nums[x - 1]; // First time seeing 'x', mark index as visited
        }
        return ans;
    }
};