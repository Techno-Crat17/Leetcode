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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>pq;

        for( auto head:lists){
            if(head!=nullptr) pq.push({head->val,head});
        }

        // we r checking list node wise
        
        ListNode dummy(-1);
        ListNode * tail=&dummy;

        while(!pq.empty()){
            auto [val,node] =pq.top(); pq.pop();

            tail->next=node;
            tail=tail->next;

            if(node->next!=nullptr){//agar same list ka node insertion
                pq.push({node->next->val,node->next});
            }
            //agar ek list khatam ho jaye ,lekin we have saved head of reamining list
            
        }

        return dummy.next;
        
    }
};