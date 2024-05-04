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
        ListNode* fast = head;
        ListNode* slow = head;
        for(int i = 0; i < n; i++) fast = fast->next; // Corrected typo: Changed k to n
        if(fast == NULL) return head->next;
        while(fast->next != NULL) { // Added braces for better readability
            fast = fast->next;
            slow = slow->next;
        } // Added closing brace for the while loop
        ListNode* delnode = slow->next; // Moved declaration of delnode inside the function block
        slow->next = slow->next->next;
        delete delnode; // Corrected memory deallocation: Changed free to delete
        return head;
    }
};