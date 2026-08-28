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
    ListNode* mergeTwoLists(ListNode* a, ListNode * b) {
        // SC = O(1)
        ListNode * c = new ListNode(-1);
        ListNode * temp = c;//temp is at dummy for traversal
        while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                temp->next=a;//temp to a
                a=a->next;//mov
                temp = temp ->next;
            }

            else{
                temp->next=b;
          
             b=b->next;
                temp = temp ->next;

            }
        }
        if(a==NULL) temp->next = b;// if a list ends so temp connected reamining of b
        else temp->next = a;
        
        return c->next;
    }
};