class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int> diff(s.size(),0);

        for(int i=0;i<s.size();i++){
            diff[i]=abs(s[i]-t[i]);
        }

        int l=0;
        int maxlen=0;
        int cost=0;
        for(int r=0;r<s.size();r++){
            cost+=diff[r];

            while(cost>maxCost){
                cost-=diff[l];
                l++;
            }

            maxlen=max(maxlen,r-l+1);
        }
        return maxlen;
    }
};