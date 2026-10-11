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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp = head;
        int len = 0;

        // cal length of LL
        while(temp != NULL){
            temp = temp->next;
            len++;
        }

        // if n is equal to no. of LL nodes
        if(n == len){
            ListNode* newhead = head->next;
            delete head;
            return newhead;
        }

        temp = head;

        for(int i = 1; i<len-n; i++){
            temp = temp->next;
        }

        ListNode* delnode = temp->next;
        temp->next = delnode->next;
        delete delnode;

        return head;
    }
};