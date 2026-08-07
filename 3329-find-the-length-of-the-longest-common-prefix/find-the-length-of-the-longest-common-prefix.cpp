class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> prefixes;

        // Step 1: Store all prefixes of numbers in arr1
        for (int val : arr1) {
            while (val > 0) {
                prefixes.insert(val);
                val /= 10; // Remove the last digit to get shorter prefixes
            }
        }

        int maxLen = 0;

        // Step 2: Search for the longest matching prefix for each number in arr2
        for (int val : arr2) {
            while (val > 0) {
                if (prefixes.count(val)) {
                    // Convert to string or count digits to get length
                    int len = to_string(val).length();
                    maxLen = max(maxLen, len);
                    break; // Since we start from full value, first match is longest for this number
                }
                val /= 10;
            }
        }

        return maxLen;
    }
};