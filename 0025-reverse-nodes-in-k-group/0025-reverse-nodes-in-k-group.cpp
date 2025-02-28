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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
         ListNode* curr=head;
         ListNode* next1=NULL;
        ListNode* prev=NULL;
        int count=0;
        while(curr!=NULL && count<k){
            curr=curr->next;
            count++;
        }
         if (count < k) {
            return head;
        }
          curr = head;
        count = 0;
        while(curr!=NULL && count<k){
            next1=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next1;
            count++;
        }
       
     //   step2 secursion
     if(next1!=NULL){
        head->next= reverseKGroup(next1,k);
     }
     return prev;
        

    }
};