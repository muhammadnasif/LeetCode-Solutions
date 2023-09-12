class Solution:
    def minDeletions(self, s: str) -> int:
        d = defaultdict(int)
        chk = defaultdict(bool)
        
        for elem in s:
            d[elem] += 1
        
        d = list(d.items())
        for i in range(len(d)):
            d[i] = list(d[i])

        chk[d[0][1]] = True   
        res = 0
        for i in range(1, len(d)):
            
            init = d[i][1]
            cnt  = d[i][1]
            
            while(chk[cnt] and cnt > 0):
                cnt -= 1

            chk[cnt] = True
            d[i][1] = cnt
            res += (init - cnt)

        return res

        
