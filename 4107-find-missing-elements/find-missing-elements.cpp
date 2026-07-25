class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<bool> seen(101,false);
        int min_val=101;
        int max_val=0;

        for(int x:nums){
            seen[x]=true;
            max_val=max(max_val,x);
            min_val=min(min_val,x);
        }
        vector<int>ans;
        for(int i=min_val;i<=max_val;i++){
            if(!seen[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};