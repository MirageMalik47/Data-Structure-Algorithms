/*Given K sorted linked lists of different sizes. The task is to merge them in such a way that after merging they will be a single 
sorted linked list.

Input:
4
3 1 2 3 2 4 5 2 5 6 2 7 8
Output:
1 2 3 4 5 5 6 7 8

Explanation :
Testcase 1: The test case has 4 sorted linked list of size 3, 2, 2, 2
1st    list     1 -> 2-> 3
2nd   list      4->5
3rd    list      5->6
4th    list      7->8
The merged list will be 1->2->3->4->5->5->6->7->8.

*/

/***************** Time Comp : O(nklogk) ******************/

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
