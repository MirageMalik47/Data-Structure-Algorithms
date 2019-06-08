/**************** Time Comp : O(n) *********************/

Node *removeDuplicates(Node *head)
{
    Node *temp=head;
    Node *tail;
       
    if(head == NULL)
      return NULL;
      
    while(temp->next!=NULL)
    {
        if(temp->data==temp->next->data)
        {
            tail=temp->next->next;
            free(temp->next);
            temp->next=tail;
        }
        else
            temp=temp->next;
        
    }
    return head;  
}
