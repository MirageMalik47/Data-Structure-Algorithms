
void deleteNode(Node *node)
{
   node->data = node->next->data ;
   if( node->next->next == NULL)
   {
     node->next=NULL;
   }
   else
    node->next=node->next->next ;
}
