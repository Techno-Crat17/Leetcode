class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        priority_queue<int> pq(nums.begin(),nums.end());

        long long ans=0;
        while(k-- && !pq.empty()){
            long long top=pq.top();pq.pop();
            if(mul>0) ans+=mul*top;
            else ans+=top;
            
            mul--;
        }
return ans;
    }
};