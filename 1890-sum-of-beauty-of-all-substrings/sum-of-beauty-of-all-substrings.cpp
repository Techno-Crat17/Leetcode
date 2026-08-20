class Solution {
public:
    int beautySum(string s) {
        int totalBeauty=0;
     

        for(int i=0;i<s.size();i++){
               unordered_map<char,int> mp;

               for(int j=i;j<s.size();j++){
                mp[s[j]]++;

                int maxFreq = 0;
                int minFreq = INT_MAX;

                for (char k = 'a'; k <='z'; ++k) {
                    if (mp[k] > 0) {//Unused characters have a count of 0. minfreq=0(always)
                        maxFreq = max(maxFreq, mp[k]);
                        minFreq = min(minFreq, mp[k]);
                    }
                }

                totalBeauty += (maxFreq - minFreq);
               }

        }

        return totalBeauty;
    }
};