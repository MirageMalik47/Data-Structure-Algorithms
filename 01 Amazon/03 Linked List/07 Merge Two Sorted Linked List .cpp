Problem Statement : https://www.geeksforgeeks.org/merge-two-sorted-lists-place/

/************************** Time Comp: O(n) ****************************/

/************ Recursive Approach ************/

Node* SortedMerge(Node* head1,Node* head2)
{
    if(!head1)
      return head2;
    if(!head2)
      return head1;
      
    if(head1->data < head2->data)
    {
        head1->next=SortedMerge(head1->next,head2);
        return head1;
    }
    else
    {
        head2->next=SortedMerge(head1,head2->next);
        return head2;
    }
}

/******************Iterative Approach ***********/

Node* SortedMerge(Node* head1, Node* head2)
{
    Node *temp=new Node;
    temp->next=NULL;
    Node *head=new Node;
    
    if(head1->data < head2->data)
    {
        temp=head1;
        head1=head1->next;
    }    
    else
    {
        temp=head2;
        head2=head2->next;
    }    
        
    head=temp;
    while(head1 && head2)
    {
        if(head1->data < head2->data)
        {
          temp->next=head1;
          head1=head1->next;
        }
        else
        {
           temp->next=head2;
           head2=head2->next;
        }
        if(temp->next!=NULL)
           temp=temp->next;
    }

    if(head1)
      temp->next=head1 ;
    
    if(head2)
        temp->next=head2;
    
    return head;
}
