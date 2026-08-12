class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        #Slightly Optimized
        return sorted(s) == sorted(t)