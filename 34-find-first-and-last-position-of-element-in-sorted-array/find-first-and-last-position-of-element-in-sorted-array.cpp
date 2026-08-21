class Solution {
public:

    // Find the first occurrence of target
    int findFirst(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size() - 1;
        int first = -1;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (nums[mid] == target) {
                // Found target, but there may be another
                // occurrence on the left.
                first = mid;
                hi = mid - 1;
            }
            else if (nums[mid] < target) {
                // Target is on the right side.
                lo = mid + 1;
            }
            else {
                // Target is on the left side.
                hi = mid - 1;
            }
        }

        return first;
    }

    // Find the last occurrence of target
    int findLast(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size() - 1;
        int last = -1;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (nums[mid] == target) {
                // Found target, but there may be another
                // occurrence on the right.
                last = mid;
                lo = mid + 1;
            }
            else if (nums[mid] < target) {
                // Target is on the right side.
                lo = mid + 1;
            }
            else {
                // Target is on the left side.
                hi = mid - 1;
            }
        }

        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        // Find first and last occurrence separately.
        int first = findFirst(nums, target);
        int last = findLast(nums, target);

        return {first, last};
    }
};