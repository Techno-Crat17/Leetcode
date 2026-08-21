class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
    
      

        int r=0,c=0;
        int dir=0;

        //R,D,L,U
        int dr[]={0,1,0,-1};
        int dc[]={1,0,-1,0};

        for(int i=1;i<=n*n;i++){
            ans[r][c]=i;
          

            int nr=r+dr[dir];
            int nc=c+dc[dir];

            if(nr<0 || nr>=n || nc<0 || nc>=n || ans[nr][nc]!=0 ){// changw dir if visited or OOB
                dir=(dir+1)%4;//0 1 2 3 0 1 2 3 . ...

            }

         
             r=r+dr[dir];
             c=c+dc[dir];


        }

        return ans;
      
    }
};