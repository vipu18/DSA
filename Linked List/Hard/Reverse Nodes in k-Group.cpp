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
ListNode* reverselinkedlist(ListNode *head){
    ListNode* temp = head;
    ListNode* prevnode = NULL;
    while (temp!= NULL){
        ListNode* front = temp -> next;
        temp->next = prevnode;
        prevnode = temp;
        temp = front;
    }
    return prevnode;
}
ListNode* getNode(ListNode* temp, int k){
    k-=1;
    while(temp!=NULL && k>0){
        k--;
        temp = temp ->next;
    }
    return temp;
}
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevlast = NULL;
        while(temp!=NULL){
            ListNode* kthnode = getNode(temp, k);
            if(kthnode == NULL){
                if(prevlast){
                    prevlast -> next = temp;
                }
                break;
            }
            ListNode* nextNode = kthnode -> next;
            kthnode -> next = NULL;
            reverselinkedlist(temp);
            if(temp == head){
                head = kthnode;
            }
            else{
                prevlast -> next = kthnode;
            }
            prevlast = temp;
            temp = nextNode;
        }
        return head;
    }
};