class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int m=baskets.size();
        int n=fruits.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(baskets[j]>=fruits[i]){
                    cnt++;
                    baskets[j]=-1;
                    break;
                }
            }
        }
        return  n-cnt;
    }
};