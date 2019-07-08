/****************** Time Comp : O(1) **************/

void DeleteNode(Node *node)
{
   if(node->next == NULL)
     node = NULL
   
   else
   {
     node->data=node->next->data;
     node->next=node->next->next;
   }
}
