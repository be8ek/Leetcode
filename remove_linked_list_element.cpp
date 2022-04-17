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
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) {
            ListNode* t = head; 
            head = head->next; 
            delete t; 
        }
        if (head == nullptr) {
            return head; 
        }
        ListNode* cur = head;
        while (true) {
            if (cur->next == nullptr) {
                return head; 
            }
            if (cur->next->val == val) {
                ListNode* t = cur->next; 
                cur->next = cur->next->next; 
                delete t; 
            } else {
                cur = cur->next; 
            }
        }
    }
};