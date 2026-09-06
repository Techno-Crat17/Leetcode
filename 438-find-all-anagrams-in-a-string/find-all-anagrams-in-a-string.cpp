class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        if(p.size()>s.size()) return ans;

        vector<int> freqP(26, 0);
        vector<int> freqS(26, 0);

         for (char c : p)
            freqP[c - 'a']++;

        int k=p.size();

        for (int i = 0; i < k; i++)
            freqS[s[i] - 'a']++;

        if (freqS == freqP)
            ans.push_back(0);

        for(int right=k;right<s.size();right++){

            freqS[s[right]-'a']++;//new character
            freqS[s[right-k]-'a']--;//old character(left)

            if (freqS == freqP)
            ans.push_back(right-k+1);//start of left as r-k removed after that r-k+1 start
        }

return ans;
        
    }
};