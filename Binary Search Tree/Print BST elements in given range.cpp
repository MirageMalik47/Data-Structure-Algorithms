/*********** Time Comp :O(n) *************/
void printNearNodes(Node *root, int l, int h)
{
   if(root == NULL)
     return ;
      
   if(l <= root->data)
      printNearNodes(root->left,l,h);
      
   if(root->data >= l && root->data <= h)
     cout<<root->data<<" ";
   
    if(h >= root->data)
      printNearNodes(root->right,l,h);
   
}
