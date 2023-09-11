class Solution:
    def groupThePeople(self, groupSizes: List[int]) -> List[List[int]]:
        d = defaultdict(list)
        for i in range(len(groupSizes)):
            d[groupSizes[i]].append(i)
            
        res = []
        temp = []
        for key in d:
            for i in range(len(d[key])):
                if i%key == 0 and len(temp) > 0:
                     res.append(temp)
                     temp = []
                temp.append(d[key][i])

        if len(temp) > 0 : res.append(temp)
        return res                

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    