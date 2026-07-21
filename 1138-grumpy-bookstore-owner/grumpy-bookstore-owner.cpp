class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        int satisfied=0;
        int extra=0;

        for(int i=0;i<n;i++){
            if(grumpy[i]==0) satisfied+=customers[i];
        }



        for(int i=0;i<minutes;i++){//first ws
            if(grumpy[i]==1) extra+=customers[i];
        }

        int maxextra=extra;

        for(int i=minutes;i<n;i++){//slide
            if(grumpy[i]==1) extra+=customers[i];
            if(grumpy[i-minutes]==1) extra-=customers[i-minutes];

            maxextra=max(maxextra,extra);
        }
        
        return maxextra+satisfied;
    }
};