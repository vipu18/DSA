//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    StackNode  * element = new StackNode(x);
    element -> next = top;
    top = element;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if(top == NULL){
        return -1;
    }
    int TopNode = top -> data;
    StackNode * temp = top;
    top = top -> next;
    delete temp;
    return TopNode;
}