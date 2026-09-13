class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {

        vector<pair<int,int>> p;
        vector<pair<int,int>> q;

        int m=img1.size();
        int n=img1[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(img1[i][j]==1) p.push_back({i,j});
                if(img2[i][j]==1) q.push_back({i,j});
            }
        }

        map<pair<int,int>,int> mp;

        int maxf=0;

        for(auto [r1,c1]:p){
            for(auto [r2,c2] : q){
                int x=r2-r1;
                int y=c2-c1;

                mp[{x,y}]++;
                maxf=max(maxf,mp[{x,y}]);

            }
        }
        return maxf;
    }
};