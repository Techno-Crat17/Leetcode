class Solution {
public:
bool isPalindrome(int i,int j,string s) {

        while(i<j){
            if(!isalnum(s[i])) i++;
            else if(!isalnum(s[j])) j--;
            else{
            if(tolower(s[i])!=tolower(s[j])) return false;

            i++;
            j--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
        if(s[left]!=s[right]){
            return isPalindrome(left+1,right,s) || isPalindrome(left,right-1,s);
        }
        left++;
        right--;
        }
        return true;
    }
};