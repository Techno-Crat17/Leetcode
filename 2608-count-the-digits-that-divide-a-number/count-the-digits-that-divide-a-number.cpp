class Solution {
public:
    int countDigits(int num) {
       int count = 0;
        int temp = num;
        while (temp > 0) {
            int x = temp % 10;
            if (x != 0 && num % x == 0) {//division case
                count++;
            }
            temp /= 10;
        }
        return count;
    }
};