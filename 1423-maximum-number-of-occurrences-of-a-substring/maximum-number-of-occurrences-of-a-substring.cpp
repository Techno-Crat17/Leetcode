class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        
        unordered_map<string,int> mp;
        int ans=0;

        for(int i=0;i+minSize<=s.size();i++){
            string sub=s.substr(i,minSize);
            unordered_set<char> st(sub.begin(),sub.end());

            if(st.size()<=maxLetters){
                mp[sub]++;
                ans=max(ans,mp[sub]);

            }
        }
        return ans;
    }
};