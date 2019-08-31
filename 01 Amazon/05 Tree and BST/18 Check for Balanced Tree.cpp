Problem Statement  : https://www.geeksforgeeks.org/how-to-determine-if-a-binary-tree-is-balanced/

/* A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree. */
/************************** Time Comp : O(n^2) **********************************/

int height(Node *root)
{
  if(root == NULL)
    return 0; 
  return max ( height(root->left) , height(root->right) ) + 1;
}  
bool isBalanced(Node *root)
{
  if(root == NULL)
     return true;
  
   int lh = height(root->left);
   int rh = height(root->right);
  
   if( abs(lh-rh) <= 1 &&  isBalanced(root->left) && isBalanced(root->right) )
     return true;
   else
     return false;
}
