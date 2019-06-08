/*Input:
1 2 2 4 5 6 7 8
Output:
2 1 4 2 6 5 8 7

Explanation:
Testcase 1: After swapping each pair considering (1,2), (2, 4), (5, 6).. so on as pairs, we get 2, 1, 4, 2, 6, 5, 8, 7 as new linked list
*/

/*************** Time Comp: O(n) *******************/ 


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
