class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        if (!list2) return list1;

        ListNode* result = new ListNode(0); 
        ListNode* temp = result;

        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;

        while (ptr1 && ptr2) {

            if (ptr1->val < ptr2->val) {
                temp->next = new ListNode(ptr1->val);
                ptr1 = ptr1->next;
            } else {
                temp->next = new ListNode(ptr2->val);
                ptr2 = ptr2->next;
            }

            temp = temp->next;
        }

        while (ptr1) {
            temp->next = new ListNode(ptr1->val);
            ptr1 = ptr1->next;
            temp = temp->next;
        }
        while (ptr2) {
            temp->next = new ListNode(ptr2->val);
            ptr2 = ptr2->next;
            temp = temp->next;
        }

        return result->next;
    }
};
