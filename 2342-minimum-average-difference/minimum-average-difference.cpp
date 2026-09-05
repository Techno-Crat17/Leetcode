class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        long long Tsum = 0;
        for (int i = 0; i < n; i++) Tsum += nums[i];

        long long Lsum = 0;
        long long minDiff = LLONG_MAX;
        int minIndex = 0;
        long long avg_mark = 1;

        for (int i = 0; i < n; i++) {
            Lsum += nums[i];
            long long Rsum = Tsum - Lsum;

            long long right_count = (i == n - 1) ? 1 : (n - avg_mark);
            long long left_val = Lsum / avg_mark;
            long long right_val = Rsum /right_count;
            
            long long diff = abs(left_val - right_val);

            if (diff < minDiff) {
                minDiff = diff;
                minIndex = i;
            }
            avg_mark++;
        }

        return minIndex;
    }
};