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
        string str = "";
        ListNode* temp = head;
        while (temp) {
            str += temp->val;
            temp = temp->next;
        }
        int st = 0, end = str.length() - 1;

        while (st <= end) {
            if (str[st] != str[end])
                return false;
            else{
                st++;
                end--;
            }
        }
        return true;
    }
};