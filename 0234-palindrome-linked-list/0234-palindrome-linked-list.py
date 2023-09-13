# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    
    def getCenterPos(self, head:Optional[ListNode]) -> int:
        
        idx = 0
        while head:
            idx += 1
            head = head.next
        even = True if idx % 2 == 0 else False
        idx /= 2
        idx = int(idx)
        idx -= 1
        
        return int(idx), even
    
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        if head.next is None: return head
        centerIdx, isEven = self.getCenterPos(head)
        p,q,r = None, head, head.next
        ctr = 0
        while ctr <= centerIdx:
            q.next = p
            p = q
            q = r
            r = r.next            
            ctr +=1
        
        
        if not isEven:
            q = r
        
        while p is not None:
            if p.val != q.val:
                return False
            p = p.next
            q = q.next

        return True
        