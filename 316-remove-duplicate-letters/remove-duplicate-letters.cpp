class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_set<char> st;
        unordered_map<char, int> mp;
        
        // last occurrence 
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]] = i;
        }

        string res = "";//
        for (int i = 0; i < s.length(); i++) {
            if (st.count(s[i])) continue;

            
            //  Top character is lexicographically larger than current character s[i]
            //  Top character will appear later in the string (mp[res.back()] > i)
            while (!res.empty() && res.back() > s[i] && mp[res.back()] > i) {
                st.erase(res.back());
                res.pop_back();
            }

            res.push_back(s[i]);
            st.insert(s[i]);
        }

        return res;
    }
};