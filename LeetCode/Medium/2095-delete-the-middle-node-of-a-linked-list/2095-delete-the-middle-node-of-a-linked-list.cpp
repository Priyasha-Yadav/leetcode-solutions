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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next) return nullptr;
        ListNode* ptr = head;
        int count = 0;
        while (ptr) {
            ptr = ptr->next;
            count++;
        }
        ptr = head;

        for (int i = 1; i < (count / 2) ; i++) {
            ptr = ptr->next;
        }
        ListNode* toDelete = ptr->next;
        ptr->next = toDelete->next;
        delete toDelete;

        return head;
    }
};