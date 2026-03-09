# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head or not head.next:
            return head
       
        tail1=head
        le=1
        while tail1.next:
            le+=1
            tail1=tail1.next
        tail1.next=head
        k=k%le
        switch=le-k
        new_tail=head
        for _ in range(switch-1):
            new_tail=new_tail.next
        new_head=new_tail.next
        new_tail.next=None
        return new_head



    
        