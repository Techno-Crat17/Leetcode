class Solution {
public:
 int maxlen=0;
 int cnt=0;
        void expand(int left,int right,const string&s){
            while(left>=0 && right<s.size() &&s[left]==s[right]){

            cnt++;
            
                    left--;
                    right++;
                
            }
        }

    
    int countSubstrings(string s) {

       int n=s.size();

        for(int i=0;i<n;i++){
            expand(i,i,s);
            expand(i,i+1,s);

        }

        return cnt;
    }
};