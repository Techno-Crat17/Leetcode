class Solution {
public:
    bool canConstruct(string s, int k) {
        if(k>s.size()) return false;

        vector<int> freq(26);
        int oddCount = 0;

        //one odd center always one palindrome,if total odd no freq > k that means more than k palindromes
        //if less than k,then even use it(flexible)
        for (auto& chr : s) freq[chr - 'a']++;

        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 == 1) {
                oddCount++;
            }
        }

        
        return (oddCount <=k);


        
    }
};