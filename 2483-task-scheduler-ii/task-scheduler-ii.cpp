
class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        long long currentDay = 0;
        unordered_map<int, long long> last;

        for (int task : tasks) {
            currentDay++;

            // Agar ye task humne pehle bhi kiya hai, toh cooldown check karo
            if (last.count(task) && currentDay<=last[task]+space) {
               currentDay = last[task] + space + 1;
            
            }

            last[task] = currentDay;
        }


        return currentDay;
    }
};