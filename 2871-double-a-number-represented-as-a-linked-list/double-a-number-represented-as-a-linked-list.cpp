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
    ListNode * reverseLL(ListNode * head){
        ListNode * prev=nullptr;
        ListNode * temp=head;

        while(temp){
            ListNode * front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {

        head=reverseLL(head);

        ListNode * curr=head;
        int carry=0;
        while(curr){
            int sum=curr->val*2+carry;
            curr->val=sum%10;
            carry=sum/10;

            if(carry && curr->next==nullptr) curr->next=new ListNode(0);
            curr=curr->next;
        }
        head=reverseLL(head);

        return head;
    }
};