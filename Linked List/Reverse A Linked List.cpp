/************* Time Comp : O(n) ************/

Node* reverse(Node *head)
{
    //Recursion
    if(head->next==NULL)
      return head;
     
    Node *x=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return x;
}
