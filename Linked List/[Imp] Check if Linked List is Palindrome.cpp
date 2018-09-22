/********************* Time Comp : O(n) and Space Comp : O(1) *********/

Node* reverse(Node *head)
{
    if(head->next==NULL)
      return head;
     
    Node *x=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return x;
}

bool isPalindrome(Node *head)
{
    Node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    if(count==1)
     return true;
    
     bool x;
     temp=head;
     for(int i=1;i<=count/2;i++)
     {
         temp=temp->next;
     }
     
    Node *midrev=reverse(temp);

    for(int i=1;i<=count/2;i++)
    {
        if(head->data==midrev->data)
        {
            head=head->next;
            midrev=midrev->next;
            x=true;
        }
        else
        {
            x=false;
            return 0;
        }
    }
    return x;
}
