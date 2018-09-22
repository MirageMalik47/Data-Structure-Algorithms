
//Merge Two Sorted
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
 //Merge K Sorted 
Node * mergeKList(Node *arr[], int N)
{
    Node* head=NULL;
    for(int i=0;i<N;i++)
    {
      head=merge(head,arr[i]);
    }
    return head;
}
