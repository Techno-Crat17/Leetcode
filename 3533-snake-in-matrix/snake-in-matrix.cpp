class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {

        vector<vector<int>> grid(n,vector<int> (n));

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=(i*n)+j;
            }
        }

        int start=0;
        int i=0,j=0;
        for(int k=0;k<commands.size();k++){
            if(commands[k]=="RIGHT") start+=1;
            if(commands[k]=="DOWN") start+=n;
            if(commands[k]=="UP") start-=n; 
            if(commands[k]=="LEFT") start-=1; 
        }
        return start;
    }
};