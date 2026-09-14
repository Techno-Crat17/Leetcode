class Solution { 
public: 
    vector<int> asteroidCollision(vector<int>& asteroids) { 

        stack<pair<int,int>> st; 

        int n = asteroids.size();

        for(int i = 0; i < n; i++) {

            int flag;

            if(asteroids[i] > 0)
                flag = 1;
            else
                flag = -1;

            bool destroyed = false;

            while(!st.empty() && st.top().second == 1 && flag == -1) {

                auto x = st.top();
                st.pop();

                // Stack asteroid is bigger
                if(x.first > -asteroids[i]) {
                    st.push(x);
                    destroyed = true;
                    break;
                }

                // Both are same size
                else if(x.first == -asteroids[i]) {
                    destroyed = true;
                    break;
                }

            }

            if(!destroyed) {
                st.push({asteroids[i], flag});
            }
        }

        vector<int> ans;

        while(!st.empty()) {
            ans.push_back(st.top().first);
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};