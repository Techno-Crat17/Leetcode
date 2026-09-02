
class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        long long currentDay = 0;
        unordered_map<int, long long> lastExecutedDay;

        for (int task : tasks) {
            currentDay++;

            // Agar ye task humne pehle bhi kiya hai, toh cooldown check karo
            if (lastExecutedDay.count(task)) {
                long long nextAvailableDay = lastExecutedDay[task] + space + 1;
                
                // Agar currentDay piche rehar gaya hai cooldown requirement se, 
                // toh currentDay ko directly agle valid day par jump karwa do
                currentDay = max(currentDay, nextAvailableDay);
            }

            lastExecutedDay[task] = currentDay;
        }


        return currentDay;
    }
};