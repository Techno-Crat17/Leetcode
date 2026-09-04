class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int l=0,r=0;
        int ans=0;
        unordered_map<string,int> mp;
        unordered_map<char,int> mps;
        while(r<s.size()){

            mps[s[r]]++;

            while(r-l+1>minSize){
                mps[s[l]]--;
                if(mps[s[l]]==0) mps.erase(s[l]);
                l++;
            }

            if(r-l+1==minSize && mps.size()<=maxLetters){
                string sub=s.substr(l,r-l+1);
                mp[sub]++;
                ans=max(ans,mp[sub]);
            }
            r++;
        }
        return ans;
    }
};