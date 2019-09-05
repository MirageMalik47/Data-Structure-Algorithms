Problem Statement : https://www.geeksforgeeks.org/queue-set-2-linked-list-implementation/

/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};
And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */


/* The method push to push element into the queue*/

void MyQueue:: push(int x)
{
      
    QueueNode *temp = new QueueNode(x);
    if(front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = rear->next;
    }
}

/*The method pop which return the element poped out of the queue*/

int MyQueue :: pop()
{
    if(front == NULL)
     return -1;
    int temp = front->data ;
    front = front->next ;
    return temp;
}
