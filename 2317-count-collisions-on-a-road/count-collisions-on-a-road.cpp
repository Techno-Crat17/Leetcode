class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();
        int left = 0, right = n - 1;

        // 1. Shuruat ke saare 'L' ignore karo will escape
        while (left < n && directions[left] == 'L') {
            left++;
        }

        // 2. Aakhri ke saare 'R' ignore karo same reason
        while (right >= 0 && directions[right] == 'R') {
            right--;
        }

        int count = 0;

        
        // 'S' (stationary cars) ko count nahi karte kyunki wo khud move nahi karti,  
        // jo beech mein faskr rukengi, wahi collision score mein +1 add karengi.
        // jab bhi L YA R MILEGA TOH cnt=1 for both 
        for (int i = left; i <= right; i++) {
            if (directions[i] != 'S') {
                count++;
            }
        }

        return count;
    }
};