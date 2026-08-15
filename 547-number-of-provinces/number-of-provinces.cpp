class Solution {
public:
void dfs(vector<vector<int>> &adj, vector<int> &visited, int node) {
        visited[node] = 1;

        for (int neigh = 0; neigh < adj.size(); neigh++) {
            if(adj[node][neigh]==1 && !visited[neigh]){
                dfs(adj,visited,neigh);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        int cnt = 0;
        vector<int> visited(V, 0);

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                cnt++;
                dfs(isConnected, visited, i);
            }
        }
        return cnt;
    }
};
    
    