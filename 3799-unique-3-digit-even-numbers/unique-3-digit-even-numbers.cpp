class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        int cnt=0;
        vector<int> freq(10, 0);

        for (int x : digits)
            freq[x]++;

        for (int i = 100; i <= 998; i += 2) {
            // even no
            string s = to_string(i);//easy access to digit

            vector<int> need(10, 0);

            for (char c : s) {
                need[c - '0']++;
            }

            bool possible = true;
            for(int d=0;d<10;d++){
                if(need[d]>freq[d]) {
                    possible=false; // no cant bed formed as needed digits more
                    break;
                }
            }
            if(possible ) cnt++;
        }
    
        return cnt;
    }
};