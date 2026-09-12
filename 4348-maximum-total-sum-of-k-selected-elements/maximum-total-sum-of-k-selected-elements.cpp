class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(), nums.end());

        long long ans = 0;
        int i = nums.size() - 1;

        while (i >= 0 && k--) {
            long long top = nums[i];

            if (mul > 0)
                ans += top * mul;
            else
                ans += top;

            i--;
            mul--;
        }

        return ans;
    }
};