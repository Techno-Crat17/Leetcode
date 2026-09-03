class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        int n=matrix.size();

    priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
       for (int r = 0; r < n; r++) {
                //as we know the rows are sorted we taking first ele at start
                pq.push({matrix[r][0],r,0});
            
        }

        while(--k){
           
            auto top=pq.top();
            pq.pop();


            int r=top[1];
            int c=top[2];
            if(c+1<n )  pq.push({matrix[r][c+1],r,(c+1)});//dynamic inc sizing  as it will inc efficeiy

           
        }
        return pq.top() [0] ;
    }
};