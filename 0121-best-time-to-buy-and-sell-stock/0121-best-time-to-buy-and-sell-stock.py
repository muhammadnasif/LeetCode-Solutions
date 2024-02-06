class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        a1, a2 = [], []

        for elem in prices:
            if len(a1) == 0:
                a1.append(elem)
            else:
                if elem < a1[-1]:
                    a1.append(elem)
                else:
                    a1.append(a1[-1])

        pricesRev = reversed(prices)
        for elem in pricesRev:
            if len(a2) == 0:
                a2.append(elem)
            else:
                if elem > a2[-1]:
                    a2.append(elem)
                else:
                    a2.append(a2[-1])

        a3 = []

        a2 = a2[::-1]
        for i in range(len(a2)):
            a3.append(a2[i] - a1[i])

        return max(a3)
