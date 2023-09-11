class Solution:

    def calc_seq(self, n:int) -> int : 
        return int(n*(n+1)/2)

    def countOrders(self, n: int) -> int:
        val = 1
        
        for i in range(1, n+1):
            val *= (self.calc_seq(2*i-1) % (10**9+7))
        
        return int(val % (10**9+7))