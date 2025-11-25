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
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next->next && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* r = reverseList(slow->next);
        ListNode* left = head;
        ListNode* right = r;

        while(right){
            if(left -> val != right-> val){
                return false;
            }
            left = left->next;
            right = right->next;
        } 
        return true;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};