class Solution {
public:
    bool check(vector<int>& nums) {

        int n = nums.size();

        for (int k = 0; k < n; k++) {
            vector<int> temp;

            for (int i = k; i < n; i++) {
                temp.push_back(nums[i]);
            }

            for (int i = 0; i < k; i++) {
                temp.push_back(nums[i]);
            }

            bool sorted = true;
            for (int i = 1; i < n; i++) {
                if (temp[i] < temp[i - 1]) {
                    sorted = false;
                    break;
                }
            }

            if (sorted)//checking atleast one rotation
                return true;
        }

        return false;
    }
};