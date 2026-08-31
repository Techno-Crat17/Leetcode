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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        int firstCI = 0;
        int prevCI = 0;
        int CI = 1;

        ListNode* currentN = head->next;
        ListNode* prevN = head;
        int mindist = INT_MAX, maxdist = -1;

        while (currentN->next) {
            if ((currentN->val > currentN->next->val &&
                 prevN->val < currentN->val) ||
                (currentN->val < currentN->next->val &&
                 prevN->val > currentN->val)) {
                if (firstCI == 0) {
                    firstCI = CI;
                    prevCI = CI;
                } else {
                    mindist = min(mindist, CI - prevCI);
                    prevCI = CI;
                }
            }
            prevN = currentN;
            currentN = currentN->next;
            CI++;
        }

        if (mindist != INT_MAX) {
            maxdist = prevCI - firstCI;
        }

         return {mindist == INT_MAX ? -1 : mindist, maxdist};
    }
};