class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {

        int n=capacity.size();

        vector<int> need(n,0);
        for(int i=0;i<n;i++) need[i]=capacity[i]-rocks[i];
        
        sort(need.begin(),need.end());

        int cnt=0;
       for(int x:need){
        if(additionalRocks>=x){
            additionalRocks-=x;
            cnt++;
        }
        else break;
       }
        return cnt;
    }
};