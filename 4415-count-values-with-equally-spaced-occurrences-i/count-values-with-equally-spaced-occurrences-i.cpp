class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {

        unordered_map<int,vector<int> > mp;

        int n=nums.size();

       for(int i=0;i<n;i++){
           mp[nums[i]].push_back(i);
       }

        int cnt=0;

        for(auto it:mp){
           if(it.second.size()==3){
               int p=it.second[0];
               int q=it.second[1];
               int r=it.second[2];

               if(q-p==r-q) cnt++;
               
           }
        }
        return cnt;
    }
};