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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* ptr = head;
        while (ptr->next) {
            int gcd = findGCD(ptr->val, ptr->next->val);
            ListNode* newNode = new ListNode(gcd);
            newNode->next = ptr->next;
            ptr->next = newNode;
            ptr = ptr->next->next;
        }
        return head;
    }

private:
    int findGCD(int a, int b) {
        int gcd = 1;
        for (int i = 1; i <= min(a, b); i++) {
            if (a % i == 0 && b % i == 0)
                gcd = i;
        }
        return gcd;
    }

};