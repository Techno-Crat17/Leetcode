class Solution {
public:
    int countDigits(int num) {
        int totalcnt=0;
        int cntnotdivide=0;
        int temp = num;
    while (temp > 0) {
        int x = temp % 10;
         if (x == 0 || num % x != 0) {// 0 divison || not divisor
            cntnotdivide++;
        }
        temp = temp / 10;
        totalcnt++;
    }
        return totalcnt-cntnotdivide;
    }
};