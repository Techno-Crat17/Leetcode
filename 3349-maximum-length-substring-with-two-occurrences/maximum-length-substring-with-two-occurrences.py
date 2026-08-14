class Solution:
    def maximumLengthSubstring(self, s: str) -> int:
        n = len(s)
        l = 0
        r = 0
        counts = {}
        max_len = 0
        

        while r < n:
            counts[s[r]] = counts.get(s[r], 0) + 1
            
            
            while counts[s[r]] > 2:
                counts[s[l]] -= 1
                l += 1
                
            max_len = max(max_len, r - l + 1)
            r += 1
            
        return max_len
        