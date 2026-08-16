class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        #Brute Force
        '''
        if len(s) != len(t):
            return False
        
        t_list = list(t)

        for i in s:
            if i in t_list:
                t_list.remove(i)
            else:
                retrun False
        retrun True '''

 #Manual sorting but bruteforce
        '''def manual_sort(text):
            chars = list(text)
            for i in range(len(chars)):
                for j in range(i + 1, len(chars)):
                    if chars[j] < chars[i]:
                        chars[i], chars[j] = chars[j], chars[i]
            return "".join(chars)
            
        return manual_sort(s) == manual_sort(t)'''

        #Slightly Optimized
        '''return sorted(s) == sorted(t) '''

        #Optimized using hashmap

        #1. Check if their len are not eal then not anagrams

        if len(s) != len(t):
            return False

        #2. Make dictionaries

        countS={}
        countT={}

        #3. Will count no. of characters in s and store their freq. in countS. if we encounter a char for first time then map it at 1 and when it's found do +1 each time.

        for i in s:
            if i in countS:
                countS[i] += 1
            else:
                countS[i] = 1

        #4. Will do similar with countT

        for i in t:
            if i in countT:
                countT[i] += 1
            else:
                countT[i] = 1

        #5. Compare

        return countS == countT