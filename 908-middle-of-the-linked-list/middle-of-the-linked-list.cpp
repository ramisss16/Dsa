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
        int len = 0;
        ListNode* curr = head;

        // Step 1: Calculate length
        while (curr != NULL) {
            len++;
            curr = curr->next;
        }

        // Step 2: Find middle index
        int mid = len / 2;

        // Step 3: Reach middle node
        curr = head;

        while (mid--) {
            curr = curr->next;
        }

        return curr;
    }
};