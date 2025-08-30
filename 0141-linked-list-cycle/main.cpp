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
    bool hasCycle(ListNode *head) {
        // validation head is empty
        if(head == nullptr) return false;
        ListNode *slowPointer = head;
        ListNode *fastPointer = head;
        // checking if the fastPointer is save to continue
        while(fastPointer!= nullptr && fastPointer->next != nullptr) {
            // move the slowPointer +1
            slowPointer = slowPointer->next;
            // move the fastPointer +2
            fastPointer = fastPointer->next->next;
            // if the head is cyclic it mean somewhere the slowPointer and FastPointer will equal
            if(slowPointer == fastPointer) return true;
        }
        return false;
    }
};