class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) { 
        int sum=0;
        for(int i=0;i<arr.size();i++) {
            vector<int> temp;
            for(int j=i;j<arr.size();j++){
                temp.push_back(arr[j]);
            
                if(temp.size()%2==1) {
                    for(int k=0;k<temp.size();k++){
                        sum+=temp[k];
                    }
                }
            }
        } 
        return sum;    

    }
};