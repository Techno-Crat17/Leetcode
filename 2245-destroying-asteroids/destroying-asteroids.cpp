class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroid) {

        long long masses=mass;
        sort(asteroid.begin(),asteroid.end());

        for(int i=0;i<asteroid.size();i++){
            if(masses>=asteroid[i]){
                masses+=asteroid[i];
            }
            else return false; 
        }
        return true;
    }
};