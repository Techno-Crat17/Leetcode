class Solution {
public:
    int countPartitions(vector<int>& nums) {

        int cnt=0;
        int totalsum=0;
        for(int x:nums){
            totalsum+=x;
        }
        int ps=0;
        int cmpsum=totalsum;

        for(int i=0;i<nums.size()-1;i++){
            ps+=nums[i];
            cmpsum-=ps;

            if(abs(cmpsum-ps)%2==0) cnt++;

            cmpsum=totalsum;
        }
       return cnt; 
    }
};