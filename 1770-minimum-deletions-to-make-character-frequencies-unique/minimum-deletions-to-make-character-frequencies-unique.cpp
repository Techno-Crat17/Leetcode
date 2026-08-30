class Solution {
public:
    int minDeletions(string s) {

        map<char,int> mp;

        for(int i=0;i<s.size();i++) mp[s[i]]++;

        set<int> used;//tracking freq
        int ans=0;
        for(auto it:mp){
            while(it.second >0 && used.count(it.second)){//freq is being repeated and whilie kyuki jabtak freq unique ya 0 na hojaye
            it.second--;
            ans++;
            }
            
            if(it.second>0) used.insert(it.second);//inserting uiques freq
            
        }
        
        return ans;;
        
    }
};