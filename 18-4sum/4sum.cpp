class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

         int n=nums.size();
         
        if(nums.size()<4) return {};

        sort(nums.begin(),nums.end());
        set<vector<int>> ans;

        for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
         
            int l=j+1;
            int r=n-1;

            while(l<r){
                long long sum= (long long)nums[i]+nums[l]+nums[r]+nums[j];

                if(sum==target) {
                    vector<int> temp={nums[i],nums[j],nums[l],nums[r]};
                    ans.insert(temp);
                    l++;
                    r--;
                }

                else if(sum > target){
                    r--;
                }
                else l++;
            }
        }
        }

       return vector<vector<int>> (ans.begin(),ans.end());
        
    }
};