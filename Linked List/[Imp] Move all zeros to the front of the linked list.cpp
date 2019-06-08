/* Example:
   1. Original list was 0->4->0->5->0->2->1->0->1->0->NULL.
     After processing list becomes 0->0->0->0->0->4->5->2->1->1->NULL.
*/


void moveZeroes(Node **head)
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
            curr->next = (*head);  //Move to Begining 
            (*head) = curr;
        }
        else
        {
            prev=temp;
            temp=temp->next;
        }
    }
}
