class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        // we r not del ele,we r counting
        for (int i = 0; i < n - 1; i++) {
            if ((i - cnt) % 2 == 0 && nums[i] == nums[i + 1]) {
                cnt++;
            }
        }
        
        // If remaining length is odd, dele last ele
        if ((n - cnt) % 2 != 0) {
            cnt++;
        }
        
        return cnt;
    }
};