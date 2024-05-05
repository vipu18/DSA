/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */

Node* mergeTwoLists(Node* list1, Node* list2) {
        Node* t1 = list1;
        Node* t2 = list2;
        Node* dummynode = new Node(-1);
        Node* temp = dummynode;
        while(t1!=NULL && t2!=NULL){
            if(t1->data < t2->data){
                temp->child = t1;
                temp = t1;
                t1 = t1-> child;
            }
            else{
                temp->child = t2;
                temp = t2;
                t2 = t2-> child;
            }
        }
        if(t1)temp -> child = t1;
        else temp->child = t2;
        return dummynode->child;        
    }

Node* flattenLinkedList(Node* head) 
{
	if(head == NULL || head->next == NULL) return head;
	Node* mergehead = flattenLinkedList(head->next);
	return mergeTwoLists(head, mergehead);
}
