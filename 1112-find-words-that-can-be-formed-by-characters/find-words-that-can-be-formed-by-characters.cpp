class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {

        int freq[26]={0};

        for(char c:chars){
            freq[c-'a']++;
        }
        int ans=0;
        for(string x:words){
            int need[26]={0};

            for(char c:x) need[c-'a']++;
            bool possible=true;

            for(int i=0;i<26;i++){
                if(need[i]>freq[i]) {
                    possible=false;
                    break;
                }
            }

            if(possible) ans+=x.length();
        }
        
        return ans;
    }
};