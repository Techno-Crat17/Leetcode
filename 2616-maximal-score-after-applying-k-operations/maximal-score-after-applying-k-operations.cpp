class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long sum=0;

        priority_queue<long long> pq(nums.begin(),nums.end());

        for(int i=1;i<=k;i++){
            long long x=pq.top();
            pq.pop();

            sum+=x;

            pq.push(ceil(x/3.0));
        }
return sum;

        
    }
};