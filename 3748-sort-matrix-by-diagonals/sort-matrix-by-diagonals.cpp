class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        map<int, vector<int>> mp;

       
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                mp[i - j].push_back(grid[i][j]);
            }
        }

       
        for(auto &it : mp) {
            int d = it.first;

            if(d >= 0) {
                sort(it.second.begin(), it.second.end());
            }
            else {
                sort(it.second.begin(), it.second.end(), greater<int>());
            }
        }

        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                int d = i - j;

                grid[i][j] = mp[d].back();
                mp[d].pop_back();
            }
        }

        return grid;
    }
};