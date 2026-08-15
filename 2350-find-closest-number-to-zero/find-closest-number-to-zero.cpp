class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int md=INT_MAX;
        for(int x:nums){
            if(abs(x)<abs(md) ) md=x;
            else if (abs(x)==abs(md) && x>md ) md=x;
        }
       return md; 
    }
};