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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return nullptr;
        int n = 1;
        ListNode* last = head;
        while (last->next) {
            n++;
            last = last->next;
        }

        k = k % n;
        if(k == 0) return head;
        ListNode* ptr = head;
        last->next = head;
        for (int i = 0; i < n - k - 1; i++) {
            ptr = ptr->next;
        }
        head = ptr->next;
        ptr->next = nullptr;

        return head;
    }
};