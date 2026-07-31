class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int placed=0;

        int m=fruits.size();
        for(int i=0;i<m;i++){
        int j=0;
        while(j < m && baskets[j]<fruits[i]) j++;
        if(j<m){
            baskets[j]=-1;
            placed++;
        }
        }
        return m-placed;
    }
};