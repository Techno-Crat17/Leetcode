class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        int i=0;
        int n=asteroids.size();
        stack<int>st;
        while(i<n){

            //no collision cases
            if(st.empty() || st.top()<0 || asteroids[i]>0){
                st.push(asteroids[i]);//asteroids tab hi push hoga ye teeno condition hogi
                i++;
            }

            else if(!st.empty() && st.top()<-asteroids[i]){
                st.pop();//remove only top and we push inc later
            }

            else if(!st.empty() && st.top()==-asteroids[i]){
                st.pop();
                i++;//incoming asteroid destroyed
            }

        
        else    i++;

        }

        vector<int> ans;
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
        
    }
};