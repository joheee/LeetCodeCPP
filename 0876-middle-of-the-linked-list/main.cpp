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
        // two pointer with +1 and +2
        ListNode* plusOnePointer = head;
        ListNode* plusTwoPointer = head;
        while(plusTwoPointer != nullptr && plusTwoPointer->next != nullptr) {
            plusOnePointer = plusOnePointer->next;
            plusTwoPointer = plusTwoPointer->next->next;
        }
        return plusOnePointer;
    }
};