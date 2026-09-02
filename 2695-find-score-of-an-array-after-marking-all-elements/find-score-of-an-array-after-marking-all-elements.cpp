class Solution {
public:
    long long findScore(vector<int>& nums) {
        vector<pair<int, int>> uv;

        for (int i = 0; i < nums.size(); i++) {
            uv.push_back({nums[i], i});
        }

        
        sort(uv.begin(), uv.end());

        vector<bool> visited(nums.size(), false);

        long long score = 0;

        for (auto p : uv) {
            int num = p.first;
            int idx = p.second;

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