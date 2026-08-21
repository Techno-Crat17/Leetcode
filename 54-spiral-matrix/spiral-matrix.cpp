class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int m=matrix.size();
        int n=matrix[0].size();

        vector<vector<int>> visited(m,vector<int> (n,-1000));
        vector<int> ans;

        int dir=0;
        //r d  l u
        int dr[]={0,1,0,-1};
        int dc[]={1,0,-1,0};

        int r=0,c=0;

        for(int i=0; i< m*n; i++){
            ans.push_back(matrix[r][c]);
            visited[r][c]=0;//marking visited

            int nr=r+dr[dir];
            int nc=c+dc[dir];

            if(nr<0 || nr>=m || nc <0 || nc>=n || visited[nr][nc]!=-1000){
                dir=(dir+1)%4;//0  1 2 3 0 1
            }

            r=r+dr[dir];
            c=c+dc[dir];

        }

        return ans;
        
    }
};