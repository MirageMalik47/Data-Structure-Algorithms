Problem Statement : https://www.geeksforgeeks.org/print-bst-keys-in-the-given-range/

/*********************** Time Comp : O(n) ******************************/
void bstinrange(Node *root, int l, int h)
{
   if(root == NULL)
     return ;
      
   if(l <= root->data)
      bstinrange(root->left,l,h);
      
   if(root->data >= l && root->data <= h)
     cout<<root->data<<" ";
   
    if(h >= root->data)
      bstinrange(root->right,l,h);
   
}
