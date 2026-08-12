class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        #Brute force
        return sorted(s) == sorted(t)