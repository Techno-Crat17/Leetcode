class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        vector<int> rowcount(m, 0);
        vector<int> colcount(n, 0);
        
        unordered_map<int, pair<int, int>> mp;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                mp[mat[i][j]] = {i, j};
            }
        }
        
        // Arr traverse karo
        for(int i = 0; i < arr.size(); i++) {
           
            int r = mp[arr[i]].first;
            int c = mp[arr[i]].second;
            
          
            rowcount[r]++;
            colcount[c]++;
            //agar row mei n cols ho toh return kar do
            if(rowcount[r] == n || colcount[c] == m) {
                return i; 
            }
        }
        
        return -1;
    }
};