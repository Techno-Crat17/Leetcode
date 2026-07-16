class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1=word1.length();
        int w2=word2.length();

        string ans;
        while(w1>0 && w2>0){
            ans+=word1[word1.length()-w1];
            ans+=word2[word2.length()-w2];
            w1--;
            w2--;
        }
        while(w1>0){
           ans+=word1[word1.length()-w1];
           w1--;
        }

        while(w2>0){
           ans+=word2[word2.length()-w2];
           w2--;
        }

        return ans;
        
    }
};