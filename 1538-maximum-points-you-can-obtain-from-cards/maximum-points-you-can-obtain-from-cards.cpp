class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int lsum=0,rsum=0;
        int maxsum=0;

        for(int i=0;i<k;i++) lsum+=cardPoints[i];
        maxsum=lsum;
        int ridx=cardPoints.size()-1;

        for(int j=k-1;j>=0;j--){
            lsum-=cardPoints[j];
            rsum+=cardPoints[ridx];

            maxsum=max(maxsum,lsum+rsum);
            ridx--;
        }

        return maxsum;
        
    }
};