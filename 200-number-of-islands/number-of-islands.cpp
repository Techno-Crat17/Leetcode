class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int cnt=0;

        // int dr[]={1,-1,0,0,-1,-1,1,1}; for no islands 2
        // int dc[]={0,0,1,-1,1,-1,1,-1};

        int dc[]={0,0,1,-1};
        int dr[]={1,-1,0,0};

        for(int r=0;r<m;r++){
            for(int c=0;c<n;c++){
                if(grid[r][c]=='1'){
                    cnt++;

                    queue<pair<int,int>>q;
                    q.push({r,c});
                    grid[r][c]='0';//marking visited

                    while(!q.empty()){
                        int x=q.front().first;
                        int y=q.front().second;
                        q.pop();

                        for(int i=0;i<4;i++){
                            int nx=x+dr[i];
                            int ny=y+dc[i];

                            if(nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]=='1'){
                                grid[nx][ny]='0';
                                q.push({nx,ny});
                             }
                        }
                    }
                }
            }
        }
        return cnt;
    }
};