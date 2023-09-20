class Solution:
    def minOperations(self, nums: list[int], x: int) -> int:
        
        target = sum(nums) - x
        res = float('inf')
        l, r, s = 0, 0, 0
        
        while r<len(nums):
            s += nums[r]
            while s > target and l <= r:
                s -= nums[l]
                l += 1
            
            if s == target:
                res = min(res, len(nums)-(r-l+1))
            
            r += 1
        
        return res if res != float('inf') else -1