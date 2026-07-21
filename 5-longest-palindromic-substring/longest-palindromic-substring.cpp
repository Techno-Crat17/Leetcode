class Solution {
public:
 int maxlen=0;
 int start=0;
        void expand(int left,int right,const string&s){
            while(left>=0 && right<s.size() &&s[left]==s[right]){

                if(right-left+1 > maxlen){
                    maxlen=right-left+1;
                    start=left;
                }

            
                    left--;
                    right++;
                
            }
        }

    string longestPalindrome(string s) {
        string ans="";

        int n=s.size();
        if(n<=1) return s;
       

        for(int i=0;i<n;i++){
            expand(i,i,s);
            expand(i,i+1,s);

        }
        
        return s.substr(start,maxlen);
    }
};