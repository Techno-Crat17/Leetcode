class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {

        unordered_map<char,int> mp;

        for(char c:chars){
            mp[c]++;
        }
        int ans=0;
        for(string x:words){
            unordered_map<char,int> temp=mp;//reintializing for every word

            
            bool possible=true;

            for(char ch:x){
                if(temp.find(ch)==temp.end() || temp[ch]==0) {
                    possible=false;
                    break;
                }
                temp[ch]--;
            }

            if(possible) ans+=x.length();
        }
        
        return ans;
    }
};