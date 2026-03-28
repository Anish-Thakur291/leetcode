# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """

        dummy=ListNode(0)
        curr=dummy
        carry=0
        while l1 or l2 or carry:
            if l1:
                val=l1.val
                l1=l1.next
                
            else:
                val=0
            if l2:
                val2=l2.val
                l2=l2.next
            else:
                val2=0
            total=val+val2+carry
            carry=total//10
            curr.next=ListNode(total%10)
            curr=curr.next
            
        return dummy.next


        