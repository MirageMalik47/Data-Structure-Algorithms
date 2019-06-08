
// Brute Force
bool isloop(Node* head)
{
   Node *slow=head;
   Node *fast=head;
   while(slow && fast && fast->next)
   {
       slow=slow->next;
       fast=fast->next->next;
       if(slow==fast)
          return 1;
   }
   return 0;
}
void removeTheLoop(Node *head)
{
     if(!isloop(head))
        return ;
     else
     {
        Node *slow=head;
        Node *fast=head;
        while(slow && fast && fast->next)
        {
           slow=slow->next;
           fast=fast->next->next;
           if(slow==fast)
               break;
        }
        slow=head;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        while(slow==fast->next)
        {
            fast=fast->next;
        }
        fast->next=NULL;
        return ;
     }
}



// By Reference Slow and Fast 
bool isloop(Node* head,Node**s,Node**f)
{
   Node *slow=head;
   Node *fast=head;
   while(slow && fast && fast->next)
   {
       slow=slow->next;
       fast=fast->next->next;
       if(slow==fast)
        {
            *s=slow;
            *f=fast;
            return 1;
        }
   }
   return 0;
}
void removeTheLoop(Node *head)
{
    Node *slow=head;
    Node *fast=head;
     if(!isloop(head,&slow,&fast))
        return ;
     else
     {
        slow=head;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
      
        while(slow==fast->next)
        {
            fast=fast->next;
        }
        fast->next=NULL;
        return ;
         
     }
}
