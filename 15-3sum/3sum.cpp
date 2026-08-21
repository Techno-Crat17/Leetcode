class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      
        int n=nums.size();
         
        if(nums.size()<3) return {};

          sort(nums.begin(),nums.end());
        set<vector<int>> ans;

        for(int i=0;i<n-2;i++){
            int l=i+1;
            int r=n-1;

            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];

                if(sum==0) {
                    vector<int> temp={nums[i],nums[l],nums[r]};
                    ans.insert(temp);
                    l++;
                    r--;
                }

                else if(sum > 0){
                    r--;
                }
                else l++;
            }
        }

       return vector<vector<int>> (ans.begin(),ans.end());
        
    }
};