class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int n=s.size();
        int cnt=0;


        for(int i=0;i+k<=n;i++){
            int x=stoi(s.substr(i,k));

            if(x!=0 && num % x==0) cnt++;
        }

        return cnt;


        
    }
};