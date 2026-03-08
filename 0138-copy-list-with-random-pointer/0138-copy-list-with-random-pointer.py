"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        # temp=head
        
        # while temp:
        #     copy=Node(temp.val)
        #     copy.next=temp.next
        #     temp.next=copy
        #     temp=copy.next
        # temp=head
        # while temp:
        #     if copy.random:
        #         copy.next.random=temp.random.next
        #     temp=temp.next.next
        # # seprate node
        # curr=head
        # dummy=Node(-1)
        # copy_curr=dummy
        # while curr:
        #     copy = curr.next
        #     curr.next = copy.next

        #     copy_curr.next = copy
        #     copy_curr = copy

        #     curr = curr.next
        # return dummy.next
        
        if not head:
            return None

        # Step 1: Insert copy nodes
        curr = head
        while curr:
            copy = Node(curr.val)
            copy.next = curr.next
            curr.next = copy
            curr = copy.next

        # Step 2: Copy random pointers
        curr = head
        while curr:
            if curr.random:
                curr.next.random = curr.random.next
            curr = curr.next.next

        # Step 3: Separate lists
        curr = head
        dummy = Node(0)
        copy_curr = dummy

        while curr:
            copy_curr.next=curr.next
            curr.next=curr.next.next
            copy_curr=copy_curr.next
            curr=curr.next
            # copy = curr.next
            # curr.next = copy.next

            # copy_curr.next = copy
            # copy_curr = copy

            # curr = curr.next

        return dummy.next



  
        