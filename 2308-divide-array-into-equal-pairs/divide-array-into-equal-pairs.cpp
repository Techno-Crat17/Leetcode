class Solution {
public:
    bool divideArray(vector<int>& nums) {

        vector<int> count(501,0);

        for(int x:nums){
            count[x]++;
        }

        for(int i=1;i<=500;i++){
            if(count[i]%2!=0) return false;
        }
        return true;
    }
};