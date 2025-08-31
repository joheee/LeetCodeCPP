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
    ListNode* reverseList(ListNode* head) {
        // for iterate within the head
        ListNode *curr = head;
        // store the reverse list
        ListNode *prev = nullptr;
        while(curr != nullptr) {
            // temporary next for store curr->next
            ListNode *next = curr->next;
            // direct curr->next to prev because prev is always one step behind the curr
            curr->next = prev;
            // move prev into curr
            prev = curr;
            // move curr into temporary next 
            curr = next;
        }
        return prev;
    }
};