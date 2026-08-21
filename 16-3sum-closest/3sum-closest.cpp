class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        if (nums.size() < 3)
            return {};
        int resultsum = 0;
        int mindiff = INT_MAX;

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int l = i + 1;
            int r = n - 1;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];

                if (sum == target) {
                    return target;
                }
                if (sum > target) {
                    r--;
                    while (l < r && nums[r] == nums[r + 1]) // optimiztize not necessary condition
                        r--; 
                } else {
                    l++;
                    while (l < r && nums[l] == nums[l - 1]) // optimiztize not necessary condition
                        l++; 
                }

                int diff = abs(sum - target);
                if (diff < mindiff) {
                    resultsum = sum;
                    mindiff = diff;
                }
            }
        }
        return resultsum;
    }
};