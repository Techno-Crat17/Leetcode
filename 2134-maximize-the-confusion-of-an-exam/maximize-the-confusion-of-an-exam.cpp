class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        string s=answerKey;
        int n=answerKey.size();
        int l=0,r=0;
        int maxlen=0;
        int maxf=0;
        vector<int> seen(26,0);
        while(r<n){
            seen[s[r]-'A']++;
            maxf=max(maxf,seen[s[r]-'A']);
            while((r-l+1)-maxf>k){//changes kitne kar sakta hu mei (total length - less freq ele ) 
            // kyuki maxfreq hi lenght mei jyada contirbute karenga
                seen[s[l]-'A']--;
                l++;
            }

            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};