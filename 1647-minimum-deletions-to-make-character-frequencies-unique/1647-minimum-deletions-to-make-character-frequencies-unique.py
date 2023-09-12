class Solution:
    def minDeletions(self, s: str) -> int:
        d = Counter(s)
        chk = defaultdict(bool)        
        res = 0
        for k in d:
            cnt  = d[k]            
            while(chk[cnt] and cnt > 0):
                cnt -= 1
                res += 1
            chk[cnt] = True
            

        return res

        
