class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
         # Step 1: Count how many times each number appears
        counts = {}
        for num in nums:
            if num in counts:
                counts[num] += 1  # Add 1 if we've seen it before
            else:
                counts[num] = 1   # Start at 1 if it's the first time
        
        # Step 2: Sort the unique numbers based on their counts
        # counts.get looks up the frequency to decide the sorting order
        unique_nums = list(counts.keys())
        unique_nums.sort(key=counts.get, reverse=True)
        
        # Step 3: Return the first k elements from our sorted list
        return unique_nums[:k]