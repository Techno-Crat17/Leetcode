class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int sum=0;
        int maxsum=0;

        for(int i=0;i<k;i++) sum+=cardPoints[i];
        maxsum=sum;
        int ridx=cardPoints.size()-1;

        for(int j=k-1;j>=0;j--){
            sum-=cardPoints[j];
            sum+=cardPoints[ridx];

            maxsum=max(maxsum,sum);
            ridx--;
        }

        return maxsum;
        
    }
};