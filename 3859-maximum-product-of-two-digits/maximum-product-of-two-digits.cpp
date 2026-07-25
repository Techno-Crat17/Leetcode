class Solution {
public:
    int maxProduct(int n) {
        int product=1;
        vector<int>ans;
        while(n>0){
            int digit=n%10;
            ans.push_back(digit);
            n=n/10;
        }

        sort(ans.begin(),ans.end());
        int x=ans.size();
        product=ans[x-1]*ans[x-2];
        return product;
    }
};