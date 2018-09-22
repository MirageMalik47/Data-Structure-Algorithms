/************ Time Comp O(n) ****************/

Node<int> *rotate( Node<int> *start, int p)
{
    int count=0;
    Node<int> * y=start;
    while(y!=NULL)
    {
        count++;
        y=y->next;
    }
    if(count == p)
     return start;
    else
    {
        p=count-p;   //Clockwise Direction  // Anti Clockwise (p=count-p) is not needed
        Node<int> * temp=start;
        Node<int> * extra;
        Node<int> * x;
        for(int i=1;i<p;i++)
        {
           temp=temp->next ;
           extra=temp->next;
        }
        temp->next=NULL;
        x=extra;
        while(extra->next != NULL)
        {
         extra=extra->next;
        }
        extra->next=start;
        return x;
    }
}


/*************** Time Comp O(n) *************/
void rotate(struct node **head_ref, int k)
{ 
  Node*temp=*head_ref;
  Node*start=*head_ref;
  if(!temp || k==0)
    return;
  for(int i=1;i<k;i++)
  {
      if(temp->next->next==NULL)
        return;
      else
         temp=temp->next;
  }
   (*head_ref)=temp->next;
   temp->next=NULL;
   temp=(*head_ref);
   while(temp->next!=NULL)
   {
      temp=temp->next;
   }
   temp->next=start;
   return;
}
