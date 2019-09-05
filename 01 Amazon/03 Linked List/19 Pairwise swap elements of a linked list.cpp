Problem Statement : https://www.geeksforgeeks.org/pairwise-swap-elements-of-a-given-linked-list/
/*
Input:
1 2 2 4 5 6 7 8
Output:
2 1 4 2 6 5 8 7
*/
/*************************** Time Comp: O(n) *******************************/ 

void pairWiseSwap(struct node *head)
{
   while(head!=NULL && head->next!=NULL)
   {
       int temp=head->data;
       head->data=head->next->data;
       head->next->data=temp;
       head=head->next->next;
   }
}
