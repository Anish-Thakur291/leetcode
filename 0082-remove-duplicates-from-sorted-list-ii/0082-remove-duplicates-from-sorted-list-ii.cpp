class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Dummy node to handle edge cases easily
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;  // prev is initially the dummy node
        ListNode* curr = head;   // curr starts at the head of the list

        while (curr != NULL) {
            // Check if the current node is a duplicate
            if (curr->next != NULL && curr->val == curr->next->val) {
                // Skip all nodes with the same value as curr
                while (curr->next != NULL && curr->val == curr->next->val) {
                    curr = curr->next;
                }
                // Connect the prev node to the next node after the duplicates
                prev->next = curr->next;
            } else {
                // No duplicate, move prev to curr
                prev = prev->next;
            }
            // Move to the next node
            curr = curr->next;
        }

        // Return the list starting from the node after dummy
        return dummy->next;
    }
};
