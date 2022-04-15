/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    
    int size(ListNode* root) {
        if (root == nullptr) {
            return 0; 
        }
        return size(root->next) + 1; 
    }
    
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int skipA = size(headA), skipB = size(headB), skip = 0; 
        if (skipA > skipB) {
            for (int i=0; i<skipA-skipB; i++) {
                headA = headA->next; 
            } 
        } else {
            for (int i=0; i<skipB-skipA; i++) {
                headB = headB->next; 
            }
        }
        while (headA != nullptr && headB != nullptr) {
            if (headA == headB) {
                return headB; 
            }
            headA = headA->next; 
            headB = headB->next; 
        } 
        return nullptr;         
    }
};


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if ((headA == nullptr) || (headB == nullptr)) {
            return nullptr; 
        }
        ListNode* a = headA; 
        ListNode* b = headB; 
        while (true) {
            if (a == b) {
                return a; 
            }
            a = a->next; 
            b = b->next; 
            if (a == b) {
                return a; 
            }
            if (a == nullptr) {
                a = headB; 
            }
            if (b == nullptr) {
                b = headA; 
            }
        }
    }
};