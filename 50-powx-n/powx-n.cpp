class Solution {
public:
    double calc(double x, long long n) {
        if (n == 0) return 1.0;
        if (x == 0) return 0.0;
        
        double pwr = calc(x, n / 2);
        
        if (n % 2 == 0) {
            return pwr * pwr;
        } else {
            return x * pwr * pwr;
        }
    }

    double myPow(double x, int n) {
        long long pwr = n;
        if (pwr < 0) {
            x = 1 / x;
            pwr = -pwr;
        }
        return calc(x, pwr);
    }
};