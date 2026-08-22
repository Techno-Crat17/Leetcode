class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {

        int m=grid.size();
        int n=grid[0].size();

        int sum=m*pow(2,n-1);
        for(int j=1;j<n;j++){//col other than msb should checked

            int cnt=0;

            for(int i=0;i<m;i++){
                if(grid[i][0]==grid[i][j]) cnt++;
            }

            int cntzeroes=m-cnt;//rows - countones

            int ones=max(cntzeroes,cnt);//we need max cnt of 1 ,if cntzero > cnt then we use cntzero as fillped (ones) for max 1s

            sum+=pow(2,n-j-1)*ones ;

        }

       return sum; 
    }
};