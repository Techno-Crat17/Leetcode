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
ListNode* merge(ListNode* a, ListNode * b) {
        // SC = O(1)
        ListNode * c = new ListNode(-1);
        ListNode * temp = c;
        while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                temp->next=a;
                a=a->next;
                temp = temp ->next;
            }

            else{
                temp->next=b;
          
             b=b->next;
                temp = temp ->next;

            }
        }
        if(a==NULL) temp->next = b;
        else temp->next = a;
        
        return c->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& arr) {
       if(arr.empty()) return nullptr;

       ListNode *  result=arr[0];

       for(int i=1;i<arr.size();i++){
        result=merge(result,arr[i]);
       }

        return result;;
        
    }
};