class Solution {
public:
    string smallestPalindrome(string s) {
        int hash[26]={0};
        for(char c:s) hash[c-'a']++;
        string ans="";
        string left="";
        char mid=0;
        for(int i=0;i<26;i++){
            left.append(hash[i]/2,'a'+i);
            if(hash[i]%2!=0)  mid='a'+i;
        }
       string right = left;
        reverse(right.begin(), right.end());
        if(mid) left+=mid;
        left.append(right);
        return left;
        
    }
};