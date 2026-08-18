class Solution {
public:
    void dfs(int r,int c,vector<vector<char>>& board){
        int m=board.size();
        int n=board[0].size();

        if (r < 0 || r >= m || c < 0 || c >= n || board[r][c] != 'X') {//out of bound or visited
            return;
        }

        board[r][c]='.';//visited

        int dc[]={0,0,1,-1};
        int dr[]={1,-1,0,0};
        for(int i=0;i<4;i++){
            dfs(r+dr[i],c+dc[i],board);
        }

    }
    int countBattleships(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='X'){
                    cnt++;
                    dfs(i,j,board);
                }
            }
        }
        
        return cnt;
    }
};