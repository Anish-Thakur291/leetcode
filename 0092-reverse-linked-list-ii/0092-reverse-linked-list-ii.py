class Solution:
    def reverseBetween(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
        dummy = ListNode(0)
        dummy.next = head
        
        prev = dummy
        for _ in range(left - 1):
            prev = prev.next
        
        curr = prev.next
        
        prev_rev = None
        for _ in range(right - left + 1):
            next_node = curr.next
            curr.next = prev_rev
            prev_rev = curr
            curr = next_node
        
        tail = prev.next
        prev.next = prev_rev
        tail.next = curr
        
        return dummy.next