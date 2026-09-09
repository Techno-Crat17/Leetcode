class Solution {
    int getNext(int n) {
        int totalSum = 0;
        while (n > 0) {
            int digit = n % 10;
            totalSum += digit * digit;
            n /= 10;
        }
        return totalSum;
    }
public:
    bool isHappy(int n) {
        
        unordered_set<int> st;
        
        while(n!=1 && !st.count(n)){//n agar 1 reach kar gaya exit aur map koi element pehle hi toh cycle never reach 1
            st.insert(n);
            n=getNext(n); 

        }
        
        return n==1;
        
    }
};