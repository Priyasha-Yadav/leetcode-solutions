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
    ListNode* middleNode(ListNode* head) {
        ListNode* ptr = head;
        int count = 1;
        if(!head->next){
            return head;
        }
        while(ptr->next){
            ptr = ptr->next;
            count++;
        }
        ptr = head;
        for(int i = 1 ; i < count/2; i++){
            ptr = ptr->next;
        }

         return ptr->next;
    }
};