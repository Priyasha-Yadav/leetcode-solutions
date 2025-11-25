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
        if(!head || !head->next || !k) return head;

        int size = 1;
        ListNode* temp = head;
        while (temp->next) {
            size++;
            temp = temp->next;
        }
        temp->next = head;
        cout << size;
        ListNode* ptr = head;
        k = k % size;
        int rotate = size - k - 1; 
        while (rotate--) {
            ptr = ptr->next;
        }
        head = ptr->next;
        ptr -> next = NULL;
        return head;
    }
};