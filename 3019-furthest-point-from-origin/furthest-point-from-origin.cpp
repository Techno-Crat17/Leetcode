class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {

        int cnt=0;
        int cntL=0;
        int cntR=0;
        for(char c:moves) {
            if(c=='_')
            cnt++; 
            else if(c=='L') cntL++;
            else if(c=='R') cntR++;
        }

        int ans=0;
        if(cntR>cntL) ans=(cntR-cntL)+cnt;
        else ans=(cntL-cntR)+cnt;

        return ans;


    }
};