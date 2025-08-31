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
        // store the reverse list
        ListNode *prev = nullptr;
        while(head != nullptr) {
            // temporary next for store head->next
            ListNode *next = head->next;
            // direct head->next to prev because prev is always one step behind the head
            head->next = prev;
            // move prev into head
            prev = head;
            // move head into temporary next 
            head = next;
        }
        return prev;
    }
};