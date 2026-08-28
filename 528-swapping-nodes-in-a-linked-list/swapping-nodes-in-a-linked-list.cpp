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
    int Length(ListNode * head){
        ListNode * temp=head;
        int cnt=0;
        while(temp){
            cnt++;
            temp=temp->next;

        }
        return cnt;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) return head;
        int k1=k;
        int length=Length(head);
        int k2=length-k+1;

        ListNode * node1=head;
        ListNode * node2=head;

        while(k1>1){
            k1--;
            node1=node1->next;
        }

          while(k2>1){
            k2--;
            node2=node2->next;
        }

        swap(node2->val,node1->val);
        return head;
        
    }
};