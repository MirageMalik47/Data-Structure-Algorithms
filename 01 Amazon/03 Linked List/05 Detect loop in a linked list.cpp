Probelm Statement : https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/

/******************************* Time Comp : O(n) **************************/

bool detectloop(Node *head)
{
   Node *slow=head;
   Node *fast=head;
   
   while(slow && fast && fast->next)
   {
       slow=slow->next;
       fast=fast->next->next;
       if(slow==fast)
          return true;
   }
   return false;
}
