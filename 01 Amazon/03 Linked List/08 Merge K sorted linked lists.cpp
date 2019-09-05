Problem Statement : https://www.geeksforgeeks.org/merge-k-sorted-linked-lists/

/**************************** Time Comp : O(n^2) ******************************/

Node* merge(Node *A,Node *B)
{
    if(!A)
        return B;
    if(!B)
        return A;
    if( A->data < B->data )
    {
        A->next = merge( A->next , B);
        return A;
    }
    else
    {
      B->next = merge( A, B->next);
      return B;
    }
        
}
Node * mergeKList(Node *arr[], int N)
{
    Node* head=NULL;
    for(int i=0;i<N;i++)
    {
      head=merge(head,arr[i]);
    }
    return head;
}
