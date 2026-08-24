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
            if(i<n && (j>=m || nums1[i]<nums2[j])) {
                curr=nums1[i++];
            }
            else curr=nums2[j++];
        }

        if((m+n)%2==1) return curr;

        return (prev+curr)/2.0;
        
    }
};