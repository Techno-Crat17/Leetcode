class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        // fcfs os algo

        int n = tasks.size();

        vector<array<int, 3>> res;

        for (int i = 0; i < tasks.size(); i++) {
            int enqtime = tasks[i][0];
            int duration = tasks[i][1];

            res.push_back({enqtime, duration, i});//saving idx(pid)
        }

        sort(res.begin(), res.end());

        vector<int> finalres;

        long long currtime = 0;
        int idx = 0;

       priority_queue<
    pair<int, int>,
    vector<pair<int, int>>,
    greater<pair<int, int>>
> pq;

        while (idx < n || !pq.empty()) { // chalne ki cond

            if (pq.empty() && currtime < res[idx][0])//jab cpu idle aur curr time kis bhi process k enq time se ho we move curr time
                currtime = res[idx][0];

            // agar first entry and currtime less toh inc currtime to that

            while (idx < n && res[idx][0] <= currtime) { // process has arrived
                pq.push({res[idx][1], res[idx][2]});
                idx++;
            }

            pair<int, int> p = pq.top();
            pq.pop();
            currtime += p.first;//processing time
            finalres.push_back(p.second);
        }

        return finalres;
    }
};