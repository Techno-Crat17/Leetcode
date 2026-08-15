class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        int l=0;
        int r=arr.size()-1;

        while((r-l+1)>k){
            if(abs(arr[l]-x)>abs(arr[r]-x)) {
                l++;
                //left more further
            }
            else r--;
        }
        return vector<int>(arr.begin()+l,arr.begin()+r+1);//r + 1 not included
    }
};