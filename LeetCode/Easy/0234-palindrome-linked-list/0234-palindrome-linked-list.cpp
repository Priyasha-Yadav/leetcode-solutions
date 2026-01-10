class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;


        while (fast && fast->next) {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }


        prev->next = reverse(slow);

        ListNode* left = head;
        ListNode* right = prev->next;


        while (left != prev->next) {
            if (left->val != right->val) return false;
            left = left->next;
            right = right->next;
        }

        return true;
    }

private:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};
