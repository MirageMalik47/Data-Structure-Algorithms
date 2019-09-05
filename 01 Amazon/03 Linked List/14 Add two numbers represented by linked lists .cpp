Problem Statement : https://www.geeksforgeeks.org/add-two-numbers-represented-by-linked-lists/

/***************************** Time Comp : O(m+n) *****************************/

//iterative 

Node* addTwoLists(Node* A, Node* B) 
{
    
    struct Node* head=NULL;
    struct Node* temp1;
    int carry=0;
    if(A==NULL)
        return B;
    if(B==NULL)
        return A;
    while(A!=NULL&&B!=NULL)
    {
        int sum=A->data+B->data+carry;
        struct Node* temp=new Node(sum%10);
        carry=sum/10;
        if(head==NULL)
        {
            head=temp;
            temp1=head;
        }
        else    
        {
            temp1->next=temp;
            temp1=temp1->next;
        }
        A=A->next;
        B=B->next;
    }
    while(A!=NULL)
    {
        int sum=A->data+carry;
        struct Node* temp=new Node(sum%10);
        carry=sum/10;
        temp1->next=temp;
        temp1=temp1->next;
        A=A->next;
    }
    while(B!=NULL)
    {
        int sum=B->data+carry;
        struct Node* temp=new Node(sum%10);
        carry=sum/10;
        temp1->next=temp;
        temp1=temp1->next;
        B=B->next;
    }
    if(carry)
    {
        int sum=carry;
        struct Node* temp=new Node(sum);
        temp1->next=temp;
        temp1=temp1->next;
    }
    return head;
}


//Recursive 

Node* addTwoLists(Node* head1, Node* head2) 
{
  if(head1 == NULL)
    return head2 ;
  if(head2 == NULL)
    return head1 ;
    
  Node * x = new Node( (head1->data + head2->data )%10 );
  x->next = addTwoLists(head1->next , head2->next);
  if( (head1->data + head2->data) >= 10 )
    x->next = addTwoLists( x->next,new Node(1) );
  return x;    
}

