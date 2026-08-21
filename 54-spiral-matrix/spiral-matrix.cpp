class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> ans;

         vector<vector<bool>> visited(m, vector<bool>(n, false));
        int r=0,c=0;
        int dir=0;

        //R,D,L,U
        int dr[]={0,1,0,-1};
        int dc[]={1,0,-1,0};

        for(int i=0;i<m*n;i++){
            ans.push_back(matrix[r][c]);
            visited[r][c]=true;

            int nr=r+dr[dir];
            int nc=c+dc[dir];

            if(nr<0 || nr>=m || nc<0 || nc>=n || visited[nr][nc]){// changw dir if visited or OOB
                dir=(dir+1)%4;//0 1 2 3 0 1 2 3 . ...

            }

            //updating row and col
             r=r+dr[dir];
             c=c+dc[dir];


        }

        return ans;
    }
};