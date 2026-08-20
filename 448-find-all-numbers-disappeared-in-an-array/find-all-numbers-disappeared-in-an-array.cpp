class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        // Put every number at its correct index
        for (int i = 0; i < n; i++) {
            int correct = nums[i] - 1;

            if (nums[i] != nums[correct]) {
                swap(nums[i], nums[correct]);
                i--;  // Check the new number at this index
            }
        }

        vector<int> ans;

        // If nums[i] != i+1, then i+1 is missing
        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                ans.push_back(i + 1);
            }
        }

        return ans;
    }
};