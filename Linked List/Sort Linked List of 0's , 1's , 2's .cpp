/********************** Time Comp: O(n) ****************/ 

void sortList(Node *head)
{
   int count0=0,count1=0,count2=0;
   Node* temp=head;
   while(temp!=NULL)
   {
        if(temp->data==0)
          count0++;
        if(temp->data==1)
          count1++; 
        if(temp->data==2)
          count2++;
          
        temp=temp->next;  
   }
   temp=head;
   while(temp!=NULL)
   {
       while(count0--)
       {
           temp->data=0;
           temp=temp->next;
       }
       while(count1--)
       {
           temp->data=1;
           temp=temp->next;
       }
       while(count2--)
       {
           temp->data=2;
           temp=temp->next;
       }
   }
}
