# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head or not head.next:
            return head
        curr=head
        ln=1
        while curr.next:
            ln+=1
            curr=curr.next
        curr.next=head
        k=k%ln
        sw=ln-k
        new_curr=head
        for _ in range(sw-1):
            new_curr=new_curr.next
        new_head=new_curr.next
        new_curr.next=None
        return new_head
        