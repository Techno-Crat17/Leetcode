class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        map<char,int> mp;

        for(char x:text) mp[x]++;


        //max balloon utna banega jab jitna min koi ek ele present ho


        return min({mp['a'],mp['b'],mp['n'],mp['o']/2,mp['l']/2});
    


    }
};