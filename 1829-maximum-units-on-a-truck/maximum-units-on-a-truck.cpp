class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        vector<pair<int, int>> p;

        for (auto& row : boxTypes) {
            p.push_back({row[1], row[0]});
        }

        sort(p.rbegin(),p.rend());

        int cnt=0;
        for(auto x:p){
            int units_box=x.first;
            int no_box=x.second;

            int boxcanfit=min(truckSize,no_box);
            cnt+=boxcanfit*units_box;
            truckSize -= boxcanfit;

            if (truckSize == 0) {
                break;
            }


            
        }
return cnt;

    }
};