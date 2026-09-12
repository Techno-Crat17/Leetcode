class Solution {
public:
    bool judgeCircle(string moves) {

        int n=moves.size();

        int x=0,y=0;

     for(char c :moves){
        if(c=='L') x--;
        else if(c=='R') x++;
        else if(c=='U') y++;
        else if(c=='D') y--;
     }
    
    if(x==0 && y==0) return true;
    return false;
    }
};