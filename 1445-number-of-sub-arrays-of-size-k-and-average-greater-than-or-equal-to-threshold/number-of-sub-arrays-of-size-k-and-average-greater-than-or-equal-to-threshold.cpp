class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int n=arr.size();
        double ws=0;
        int cnt=0;

        for(int i=0;i<k;i++) ws+=arr[i];

        double calavg=ws/k;
        if(calavg>=threshold) cnt++;

        for(int j=k;j<n;j++){
            ws+=arr[j];
            ws-=arr[j-k];
            calavg=ws/k;
            if(calavg>=threshold) cnt++;
        }
        return cnt;
    }
};