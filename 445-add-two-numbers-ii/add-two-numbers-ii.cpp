class Solution {
public:

    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;

        while (head != nullptr) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }

        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        
        l1 = reverse(l1);
        l2 = reverse(l2);

      
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;

        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {

            int sum = carry;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;

            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }

        // Reverse answer back to MSB first
        return reverse(dummy->next);
    }
};