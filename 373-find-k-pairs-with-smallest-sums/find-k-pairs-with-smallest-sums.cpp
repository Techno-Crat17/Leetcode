class Solution {
public:
    typedef pair<int,pair<int,int>> P;
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<P,vector<P>,greater<P>> pq;

        pq.push({nums1[0]+nums2[0],{0,0}});

        int n=nums1.size();
        int m=nums2.size();

        set<P> visited;
        P nxt={nums1[0]+nums2[0],{0,0}};
        visited.insert(nxt);

        vector<vector<int>> res;

        while(k>0 && !pq.empty()){
            auto temp=pq.top();
            pq.pop();

          

            int i=temp.second.first;
            int j=temp.second.second;

            res.push_back({nums1[i],nums2[j]});
            k--;

            //push (i+1,j)
            if (i + 1 < n) {
                P next_i = {nums1[i + 1] + nums2[j], {i + 1, j}};
                if (visited.find(next_i) == visited.end()) {
                    pq.push(next_i);
                    visited.insert(next_i);
                }
            }
            //push (i,j+1)
            if (j + 1 < m) {
                P next_j = {nums1[i] + nums2[j + 1], {i, j + 1}};
                if (visited.find(next_j) == visited.end()) {
                    pq.push(next_j);
                    visited.insert(next_j);
                }
            }

        }

        return res;
    }
};