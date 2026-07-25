class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> alt(n+1,0);
        alt.push_back(0);
        int sum=0;
        for(int i=1;i<n+1;i++){
            sum+=gain[i-1];
            alt.push_back(sum);
        }
        int maxi=INT_MIN;
        for(int x:alt){
            if(x>maxi) maxi=x;
        }

        return maxi;
    }
};