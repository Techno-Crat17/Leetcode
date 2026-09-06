class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> res;

        map<string,vector<string>> mp;


        for(string x:strs){
            string y=x;
            sort(begin(x),end(x));

            mp[x].push_back(y);
        }

        for(auto it:mp){
            res.push_back(it.second);
        }
        return res;
        
    }
};