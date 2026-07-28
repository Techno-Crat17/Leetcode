class Solution {
public:

    void bfs(int node, vector<vector<int>>& adj, vector<int>& visited){

        queue<int> q;
        q.push(node);
        visited[node] = 1;

        while(!q.empty()){

            int curr = q.front();
            q.pop();

            for(int neigh : adj[curr]){

                if(!visited[neigh]){

                    visited[neigh] = 1;
                    q.push(neigh);
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {

        int V = isConnected.size();

        vector<vector<int>> adj(V);

        for(int i=0;i<V;i++){

            for(int j=0;j<V;j++){

                if(isConnected[i][j]==1 && i!=j){

                    adj[i].push_back(j);
                }
            }
        }

        vector<int> visited(V,0);

        int cnt=0;

        for(int i=0;i<V;i++){

            if(!visited[i]){

                cnt++;

                bfs(i,adj,visited);
            }
        }

        return cnt;
    }
};