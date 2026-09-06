class Solution {
public:
    bool check(vector<int>& weights,int capcity,int reqdays){
        int days=1;
        int load=0;

        for(int currentwt:weights){
            if(currentwt+load>capcity){
                days++;//ship on next day
                load=currentwt;//wt that cause issue allot to next day as first parcel
            }
            else{
                load+=currentwt;
            }
        }

        return days<=reqdays;//ensure min days 
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int ans=high;

        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(weights,mid,days)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};