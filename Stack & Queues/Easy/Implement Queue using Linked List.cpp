//Function to push an element into the queue.
void MyQueue:: push(int x)
{
        QueueNode *temp;
        temp = new QueueNode(x);
        if(temp == NULL){
            cout << "empty" << endl;
            return;
        }
        else{
            if(front == NULL){
                rear = temp;
                front = temp;
            }
            else{
                rear -> next = temp;
                rear = temp;
            }
        }
        }

//Function to pop front element from the queue.
int MyQueue :: pop()
{
      if(front == NULL){
          return -1;
      }
      QueueNode *temp = front;
      int val = front ->data;
      front = front -> next;
      delete temp;
      return val;
}