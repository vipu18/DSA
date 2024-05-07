class Node {
public:
    string val;
    Node* next;
    Node* prev;
    
    Node(string val) {
        this->val = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class BrowserHistory {
public:
    Node* current;
    
    BrowserHistory(string homepage) {
        current = new Node(homepage);
    }
    
    void visit(string url) {
        Node* newPage = new Node(url);
        newPage->prev = current;
        current->next = newPage;
        current = newPage;
    }
    
    string back(int steps) {
        while(steps && current->prev) {
            current = current->prev;
            steps--;
        }
        return current->val;
    }
    
    string forward(int steps) {
        while(steps && current->next) {
            current = current->next;
            steps--;
        }
        return current->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */