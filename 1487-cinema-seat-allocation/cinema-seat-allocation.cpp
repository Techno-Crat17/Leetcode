class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        unordered_map<int,unordered_set<int>> rows;

        for(auto&seat:reservedSeats){
            rows[seat[0]].insert(seat[1]);//inserting row with filled seat
        }
        
        int ans=(n-rows.size())*2;//empty rows can have 2 grp seating    
        for (auto &[row,reserved]:rows){
            bool left=true;
            bool middle=true;
            bool right=true;

            for(int s:{2,3,4,5}) if(reserved.count(s)) left=false;
            for(int s:{4,5,6,7}) if(reserved.count(s)) middle=false;
            for(int s:{6,7,8,9}) if(reserved.count(s)) right=false;

            if(left && right) ans+=2;

            else if (left || middle || right) ans+=1;

        }    
        return ans;
   }
};