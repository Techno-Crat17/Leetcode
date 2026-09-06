class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {

        map<int,int> mp;
        for(auto match:matches){
            int winner=match[0];
            int loss=match[1];

            if(!mp.count(winner) )mp[winner]=0;//first time entry even it enter after some time they get incremneted independetly
            mp[loss]++;
        }

        vector<int>zeroloss;
        vector<int>oneloss;

        for(auto it:mp){
            if(it.second==1) oneloss.push_back(it.first);
            else if(it.second==0) zeroloss.push_back(it.first);
        }


        return  {zeroloss,oneloss};
    }
};