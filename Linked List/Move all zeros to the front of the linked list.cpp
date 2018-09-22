/***************** Time Comp : O(n) ************/
void moveZeroes(struct Node **head)
{
    Node *temp = (*head)->next;
    Node *prev = (*head) ;
    
    while(temp)
    {
        
        if(temp->data  == 0 )
        {
            Node *curr = temp;
            temp = temp->next;
            prev->next = temp;
            //Move to Begining 
            curr->next = (*head);
            (*head) = curr;
        }
        else
        {
            prev=temp;
            temp=temp->next;
        }
    }
}
