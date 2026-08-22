class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        for(int i=num.size()-1;i>=0;i--){
            if((num[i]-'0')%2==1) {
                ans=num.substr(0,i+1);//(start,length)
                break;//as small odd no will be selected
        }
        }
        return ans;
    }
};