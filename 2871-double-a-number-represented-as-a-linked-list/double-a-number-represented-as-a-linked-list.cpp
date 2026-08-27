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
    ListNode* doubleIt(ListNode* head) {

        stack<ListNode*>st;
        ListNode * temp=head;
        while(temp){
            st.push(temp);
            temp=temp->next;
        }
        int carry=0;
        ListNode * newNode=nullptr;
        while(!st.empty()){
            ListNode * node=st.top();
            st.pop();
            int sum=node->val*2+carry;
            node->val=sum%10;
            carry=sum/10;

            node->next=newNode;
            newNode=node;
        }

        if(carry){
            newNode=new ListNode(1,newNode);
        }
        return newNode;
    }
};