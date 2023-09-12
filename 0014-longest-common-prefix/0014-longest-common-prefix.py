class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        
        if len(strs) == 1 : return strs[0]

        idx = 0
        ctr = 0
        flag = False
        mLen = 300
        for elem in strs:
            mLen = min(mLen, len(elem))

        for t in range(mLen):
            for i in range(len(strs)-1):
                if strs[i][idx] == strs[i+1][idx]: 
                    ctr += 1
                else:
                    flag = True
                    break
                if ctr == len(strs) - 1: 
                    ctr = 0
                    idx += 1
            if flag: break 
        

        return strs[0][:idx]
        

