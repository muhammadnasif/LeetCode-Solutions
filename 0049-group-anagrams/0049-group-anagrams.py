class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d = defaultdict(list)
        
        
        
        for elem in strs:
            d[''.join(sorted(elem))].append(elem)
            
        res = []
        for key in d:
            temp = []
            for elem in d[key]:
                temp.append(elem)
            res.append(temp)
        
        return res