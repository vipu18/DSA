class Node{
    public:
    int data, i, j;
    Node(int data, int row, int col){
        this->data = data;
        this->i = row;
        this->j = col;
    }
};

class compare{
    public:
    bool operator()(Node* a, Node* b){
        return a->data > b->data;
    }
};

class Solution
{
    public:
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        priority_queue <Node*, vector <Node*>, compare> minHeap;
        for(int i = 0; i<K; i++){
            Node* temp = new Node(arr[i][0], i, 0);
            minHeap.push(temp);
        }
        vector<int> ans;
        while(minHeap.size() > 0){
            Node* temp = minHeap.top();
            ans.push_back(temp->data);
            minHeap.pop();
            int i = temp->i;
            int j = temp->j;
            if(j+1 < arr[i].size()){
                Node* next = new Node(arr[i][j+1], i, j+1);
                minHeap.push(next);
            }
            delete temp;
        }
        return ans;
    }
};
