class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        string ans="";
        
         for(int i=0;i<s.length();i++){
            int ones=0;
            for(int j=i;j<s.length();j++){
                if(s[j]-'0'==1) ones++;

                if(ones==k){
                    string cur=s.substr(i,j-i+1);

                    if(ans.empty() || cur.size()<ans.size() || (cur.size()==ans.size() && cur<ans)) ans=cur;
                }

                if(ones > k) break;
            }
        }
        return ans;
    }
};