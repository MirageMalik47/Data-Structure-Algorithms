Problem Statement : https://www.geeksforgeeks.org/given-only-a-pointer-to-a-node-to-be-deleted-in-a-singly-linked-list-how-do-you-delete-it/

/************************** Time Comp : O(n) ************************/

void deleteNode(Node *node)
{
   node->data = node->next->data ;
   
   if( node->next->next == NULL)
      node->next = NULL;
   else
      node->next = node->next->next ;
}
