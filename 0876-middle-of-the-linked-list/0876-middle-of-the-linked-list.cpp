
class Solution {
    int len(ListNode* head){
        
        int lent=0;
        while(head!=NULL){
            lent++;
            head=head->next;
        }
        return lent;
    }
public:
    ListNode* middleNode(ListNode* head) {
       
      int ln=len(head);
     
       int ans=(ln/2);
       ListNode* temp=head;
       int cnt=0;
       while(cnt<ans){
        temp=temp->next;
        cnt++;
       }
       return temp;
      
    }
};
