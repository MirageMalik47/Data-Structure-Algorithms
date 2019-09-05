Problem Statement : https://www.geeksforgeeks.org/write-a-function-to-get-the-intersection-point-of-two-linked-lists/

/******************************* Time Comp : O(m + n) ******************************/

int length(Node*head)
{
    Node*temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++ ;
        temp=temp->next;
    }
    return count ;
}

int intersectPoint(Node* head1, Node* head2)
{
    int a=length(head1);
    int b=length(head2);
    int d = a-b;

    if(d>0)
    {
       while(d--)
           head1=head1->next;
    }
    else if(d<0)
    {
        while(d++)                //d=-d;
            head2=head2->next;
    }
    
    while(head1 && head2)
    {
        if(head1 == head2)
        {
            return head1->data;
        }
        else
        {
            head1=head1->next;
            head2=head2->next;
        }
    }
    return -1;
}
