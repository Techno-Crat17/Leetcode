class Solution {
public:
    int countdigits(int n){
        int cnt=0;
        while(n!=0){
            n/=10;
            cnt++;
        }
        return cnt;
    } 
    int findNumbers(vector<int>& nums) {
            int ans=0;
       
        for(int x:nums){
            int y=countdigits(x);
            if(y%2==0) ans++;
        }

        return ans;
        
    }
};