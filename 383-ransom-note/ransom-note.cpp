class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.size();
        int m=magazine.size();
        unordered_map<char,int> mp;//saving magazine char,freq 
        // if ransom can be formed that means it must equal freq char or more
        for(int i=0;i<m;i++){
            mp[magazine[i]]++;
        }

        for(int i=0;i<n;i++){
            char ch=ransomNote[i];
            if(mp.find(ch)==mp.end() || mp[ch]==0){//if that char not availab or became empty(still req so false)
               return false;
            }
           mp[ch]--;
        }
     
         return true;
    }
};