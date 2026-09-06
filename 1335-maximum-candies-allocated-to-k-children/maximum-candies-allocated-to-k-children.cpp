class Solution {
public:
    long long count(vector<int>& candies,long long x){
        long long cnt=0;
        for(int y:candies){
            cnt+=ceil(y/x);
        }
        return cnt;
    }
    int maximumCandies(vector<int>& candies, long long k) {

        int low=1;
        int high=*max_element(candies.begin(),candies.end());
        int ans=0;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(count(candies,mid)>=k){
                ans=mid;
                low=mid+1;

            }
            else high=mid-1;
        }

        return ans;
        
    }
};