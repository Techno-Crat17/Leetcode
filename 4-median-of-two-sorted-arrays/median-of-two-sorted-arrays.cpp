class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        int n=nums1.size();
        int m=nums2.size();
        int mid=(m+n)/2;

        int curr=0,prev=0;

        for(int k=0;k<=mid;k++){
            prev=curr;
            //nums1 se ele tab uthayege jab nums1 bacha ho ya(or) nums2 bada ho ya OOb ho
            if(i<n && (j>=m || nums1[i]<nums2[j])) {
                curr=nums1[i++];
            }
            else curr=nums2[j++];
        }

        if((m+n)%2==1) return curr;

        return (prev+curr)/2.0;//for even number
        
        
    }
};