/************************ Time Comp : O(n) *************/

Node * removeDuplicates(Node *root)
{
  unordered_set<int> m ;
  Node *curr = root ;
  Node *prev = NULL ;
  while(curr)
  {
    if(m.count(curr->data) == 1)
    {
        prev->next  = curr->next ;
        free(curr) ;
    }
    else
    {
        m.insert(curr->data) ;
        prev = curr ;
    }
    curr = curr->next ;
   }
   return root;
}
