class Solution:
    def climbStairs(self, n: int) -> int:
        if n == 1 : return 1
        if n == 2 : return 2
        
        n_1 = 0
        n_2 = 1
        n_3 = 2
        for i in range(n-2):
            n_1 = n_2
            n_2 = n_3
            n_3 = n_2 + n_1
            
        return n_3