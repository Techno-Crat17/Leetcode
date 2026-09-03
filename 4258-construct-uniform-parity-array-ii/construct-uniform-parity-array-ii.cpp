class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());

        int smallest=nums1[0];
        //we solve this by pure observation
        //agar sabse smallest ele agar odd we can use this ele to convert higher(evens) to odd ->always true
        //agar even hai and saare agar even true else some odd- even =odd issue false

        if(smallest%2==1) return true;

        else{
            for(int i=1;i<nums1.size();i++){
                if(nums1[i]%2==1) return false;
            }
        }
        return true;
    }
};