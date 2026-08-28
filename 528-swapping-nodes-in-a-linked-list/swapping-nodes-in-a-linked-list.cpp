
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {

        ListNode* first = head;

        // so we need k - 1 moves to reach position k
        for (int i = 1; i < k; ++i) {
            first = first->next;
        }
        ListNode* fast = first;

        ListNode* second = head;

        // When fast reaches the last node,
        // second will be at the k-th node from the end
        while (fast->next != nullptr) {
            fast = fast->next;
            second = second->next;
        }

        swap(first->val, second->val);
        return head;
    }
};
