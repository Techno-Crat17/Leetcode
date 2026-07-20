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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *newhead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;   
    }
    ListNode* removeNodes(ListNode* head) {
        ListNode * revhead=reverseList(head);

        int maxvalue=revhead->val;
        ListNode * temp=revhead;
        while(temp->next){
            if(temp->next->val < maxvalue){
                temp->next=temp->next->next;
            }
            else{
                maxvalue=temp->next->val;
                temp=temp->next;
            }
        }
        
        return reverseList(revhead);
        
    }
};