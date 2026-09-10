class Solution {
public:
    int longestPalindrome(string s) {

        map<char,int> mp;

        for(char x:s) mp[x]++;

        int cnt=0;
        bool oddflag=false;


        for(auto [key,value] : mp){
            cnt+=(value/2)*2;//handle odd case > 1 also

            if(value%2==1) oddflag=true;
        }
        
        if(oddflag) cnt++;

        return cnt;
    }
};