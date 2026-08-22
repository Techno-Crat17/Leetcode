class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {

        int m=grid.size();
        int n=grid[0].size(); 
        int dir=0;//we can use modulo also for 0 1 0 1 pattern
        vector<int> ans;
        for(int i=0;i<m;i++){
            if(i%2==0){
                for(int j=0;j<n;j++){
                    if(dir==0)
                ans.push_back(grid[i][j]);

                dir=(dir+1)%2;//0 1 0 1
                }
            }

            else{
                for(int j=n-1;j>=0;j--){
                    if(dir==0)
                ans.push_back(grid[i][j]);

                
                dir=(dir+1)%2;//0 1 0 1 and, we can generate for take skip skip if we 0 1 1 0 like this etc pattern
                }
            }
        }
        
        return ans;
    }
};