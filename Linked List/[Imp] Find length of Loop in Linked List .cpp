/****** Time Comp : O(n) ***********/

int countNodesinLoop(Node *head)
{
     Node*slow=head;
     Node*fast=head;
     while(slow && fast && fast->next)
     {
         slow=slow->next;
         fast=fast->next->next;
         if(slow==fast)
         {
            int count=1;
            while(fast!=slow->next)
            {
                count++;
                slow=slow->next;
            }
            return count;
         }
     }
     return 0;
}
