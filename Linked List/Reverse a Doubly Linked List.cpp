/****************** Time Comp : O(n) ******************/

void reverse(Node **head_ref)
{
  Node *temp = NULL;  
  Node *current = *head_ref;  

    while (current != NULL)  
    {  
        temp = current->prev;  
        current->prev = current->next;  
        current->next = temp;              
        current = current->prev;  
    }  

    if(temp != NULL )  
        *head_ref = temp->prev; 
}
