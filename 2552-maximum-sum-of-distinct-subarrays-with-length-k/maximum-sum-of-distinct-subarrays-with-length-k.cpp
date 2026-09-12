class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;

        int l = 0;
        long long sum = 0;
        long long maxsum = 0;

        for (int r = 0; r < n; r++) {

            mp[nums[r]]++;
            sum += nums[r];

            // Window size > k
            while (r - l + 1 > k) {
                mp[nums[l]]--;
                sum -= nums[l];

                if (mp[nums[l]] == 0)
                    mp.erase(nums[l]);

                l++;
            }

            if (r - l + 1 == k && mp.size() == k) {
                maxsum = max(maxsum, sum);
            }
        }

        return maxsum;
    }
};