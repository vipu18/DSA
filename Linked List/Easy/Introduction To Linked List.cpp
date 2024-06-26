/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* constructLL(vector<int>& arr) {
    Node* temp = NULL;
    Node* head;
    head = new Node(arr[0], NULL);
    temp = head; 
    for(int i=1; i<arr.size(); i++){
        Node* x = new Node(arr[i], NULL);
        temp -> next = x;
        temp = x;
    }
    return head;
}