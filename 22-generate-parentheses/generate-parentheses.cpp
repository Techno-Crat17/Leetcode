class Solution {
public:
    void generate(vector<string> &ans,string s,int open,int close,int n){
        if(close==n){
            ans.push_back(s);
            return;
        }
        // Add a closing bracket ')' only if we have more '(' than ')'
        if(open>close) generate(ans,s+')',open,close+1,n);
        if(open<n) generate(ans,s+'(',open+1,close,n);
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string>ans;
        generate(ans,s,0,0,n);
        return ans;
        
    }
};