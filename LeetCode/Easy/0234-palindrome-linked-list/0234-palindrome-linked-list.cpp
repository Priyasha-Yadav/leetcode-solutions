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
        if(!head || !head->next) return true;
        ListNode* slow = head;
        ListNode* prev = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        if (fast) slow = slow->next;

        prev->next = reverse(slow);
        ListNode* ptr = prev->next;
        while(head != prev->next){
            if(head->val != ptr->val) return false;
            ptr = ptr->next;
            head = head->next;
        }
        return true;
    }

private:
    ListNode* reverse(ListNode* head) {
        ListNode* next = head;
        ListNode* prev = nullptr;
        ListNode* curr = next;
        while (next) {
            next = next->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};