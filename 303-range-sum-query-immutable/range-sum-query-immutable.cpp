class NumArray {
    vector<int>prefix;
public:
    NumArray(vector<int>& nums) {
        int n=nums.size();
        prefix.assign(n+1,0);


        for(int i=0;i<n;i++){
            prefix[i+1]+=prefix[i]+nums[i];
        }

        
        
    }
    
    int sumRange(int left, int right) {
       

        int total=prefix[right+1];
        return total-prefix[left];
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */