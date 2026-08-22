class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int i=0;//track place where even no can placed
        int j=0;//scan whole error
        while(j<n){
            if(nums[j]%2==0){
                swap(nums[j],nums[i]);
                i++;
            }
            j++;
        }
        return nums;
    }
};