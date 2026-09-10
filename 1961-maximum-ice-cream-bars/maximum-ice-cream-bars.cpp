class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        sort(costs.begin(),costs.end());
        long long coin=coins;
        int cnt=0;
        for(int x:costs){
            coin-=x;
            if(coin>=0) cnt++;
            else break;
        }
        return cnt;
    }
};