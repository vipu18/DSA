/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* insert(Node* head) {
        Node* temp = head;
        Node* copyNode;
        while (temp != NULL) {
            copyNode = new Node(temp->val);
            copyNode->next = temp->next;
            temp->next = copyNode;
            temp = temp->next->next;
        }
        return head;
    }

    Node* connect(Node* head) {
        Node* temp = head;
        while (temp != NULL && temp->next != NULL) {
            if (temp->random != NULL)
                temp->next->random = temp->random->next;
            temp = temp->next->next;
        }
        return head;
    }

    Node* deep(Node* head) {
        Node* dnode = new Node(-1);
        Node* res = dnode;
        Node* temp = head;
        while (temp != NULL && temp->next != NULL) {
            res->next = temp->next;
            temp->next = temp->next->next;
            res = res->next;
            temp = temp->next;
        }
        return dnode->next;
    }

    Node* copyRandomList(Node* head) {
        insert(head);
        connect(head);
        return deep(head);
    }
};