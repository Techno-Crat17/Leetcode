class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1=word1.length();
        int w2=word2.length();
        int i=0;
        int j=0;
        string ans;
        while(i<w1 && j<w2){
            ans+=word1[i++];
            ans+=word2[j++];
        
        }
        while(i<w1){
           ans+=word1[i++];
        
        }

        while(j<w2){
           ans+=word2[j++];
        
        }

        return ans;
        
    }
};