/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return NULL;
        }
           ListNode* newHead = new ListNode(-1);
        newHead->next=head;
        ListNode* prev = newHead;
        ListNode* cur=head;
        while(cur != NULL){
            if(cur->val == val){
                 ListNode *deleteNode = cur;
                prev->next=cur->next;
                cur=cur->next;
                delete(deleteNode);
               
            }else{
                
                prev = cur;
            cur = cur->next;
            }
        }
        return newHead->next;
    }
};