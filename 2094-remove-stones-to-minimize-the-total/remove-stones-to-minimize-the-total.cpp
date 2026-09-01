class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {

        //we need min sum we need to bigger element so heap approach

        priority_queue<int> pq(piles.begin(),piles.end());
        int sum=0;

        for(int x:piles) sum+=x;

        // i can make k collision

        for(int i=1;i<=k;i++){
            int mx=pq.top();pq.pop();
            int removed=mx/2;
            mx-=removed;//rem ele after removal
            sum-=removed;//thier contributions
            pq.push(mx);
        }

        return sum;


        
    }
};