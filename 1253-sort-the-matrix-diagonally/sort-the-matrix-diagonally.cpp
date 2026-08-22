class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {

        int m=mat.size();
        int n=mat[0].size();

        map<int,vector<int>> mp;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mp[i-j].push_back(mat[i][j]);
            }
        }

        for(auto &it:mp){//by ref to sort actual array
            sort(it.second.begin(),it.second.end(),greater<int>());
        }
       

         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mat[i][j] = mp[i - j].back();//ret last part of diagonal indice
                mp[i - j].pop_back();
            }
        }
     
        return mat;
    }
};