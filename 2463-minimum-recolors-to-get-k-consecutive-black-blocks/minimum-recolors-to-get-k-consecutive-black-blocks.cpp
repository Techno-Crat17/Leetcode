class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int cnt=0;
        int mincnt=n+1;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W') cnt++;
        }
        mincnt=cnt;
        for(int j=k;j<n;j++){
            if(blocks[j]=='W') cnt++;
            if(blocks[j-k]=='W') cnt--;
            mincnt=min(mincnt,cnt);
        }
        return mincnt;
    }
};