Problem Statement : https://www.geeksforgeeks.org/reverse-a-linked-list/

/************* Time Comp : O(n) ************/

Node* reverse(Node *head)
{
    if(head->next==NULL)
      return head;
     
    Node *x=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return x;
}


/************* Time Comp : O(n) ************/

Node* reverse(Node *head)
{
  Node*current=head;
  Node*prev=NULL;
  Node*nx;
  while(current!=NULL)
  {
    nx=current->next;
    current->next=prev;
    prev=current;
    current=nx;       
  }
  return prev;
}
