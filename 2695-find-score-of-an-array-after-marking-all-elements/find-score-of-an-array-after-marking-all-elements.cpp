class Solution {
    typedef pair<int,int> P;
public:
    long long findScore(vector<int>& nums) {
        priority_queue<P,vector<P>,greater<P>> pq;

        for (int i = 0; i < nums.size(); i++) {
            pq.push({nums[i], i});
        }


        vector<bool> visited(nums.size(), false);

        long long score = 0;

        while(!pq.empty()){
            auto p=pq.top();pq.pop();
            int idx=p.second;
            int num=p.first;
            if (visited[idx])
                continue;

            score += num;
            visited[idx] = true;

          
            if (idx > 0)
                visited[idx - 1] = true;

           
            if (idx < nums.size() - 1)
                visited[idx + 1] = true;
        }

        return score;
    }
};