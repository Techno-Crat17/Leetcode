class Solution {
public:
    int countPartitions(vector<int>& nums) {

        //eft_sum - right_sum = left_sum - (total_sum - left_sum) = 2 * left_sum (always even)- total_sum.
        //check total sum even ot not 
        int cnt=0;
        int totalsum=0;
        for(int x:nums){
            totalsum+=x;
        }
        return (totalsum % 2 == 0) ? nums.size() - 1 : 0;
    }
};