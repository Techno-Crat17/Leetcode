class Solution {
public:
    vector<int> getFactors(int n){
        vector<int> factors;

        for(int i=2;i*i<=n;i++){
            if(n % i ==0){
                factors.push_back(i);

                while(n%i==0){
                    n/=i;
                }
            }
        }

        if( n > 1) factors.push_back(n);

        return factors;
    }
    int longestSubarray(vector<int>& nums, int k) {

        int n=nums.size();

        unordered_map<int,int> mp;

        int left=0,ans=0,distinct=0;

        for(int right=0;right < n;right++){

            vector<int> f=getFactors(nums[right]);//all distinct pf of nums[r]

            for(int p : f){
                if(mp[p]==0) distinct++;// for unique pf

                    mp[p]++;

            }

            while( distinct > k){
                
                 vector<int> lf=getFactors(nums[left]);

                 for(int p : lf){

                 mp[p]--;
                if(mp[p]==0) distinct--; //for unique pf dec

                    
            }

            left++;

            }

            ans=max(ans,right-left+1);
        }
       return ans; 
    }
};