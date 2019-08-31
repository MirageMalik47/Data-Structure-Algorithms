Problem Statement : https://www.geeksforgeeks.org/root-to-leaf-path-sum-equal-to-a-given-number/

Approach :
Recursively check if left or right child has path sum equal to ( sum – root->data)

/***************************** Time Comp : O(n) ********************************/

bool hasPathSum(Node *root, int sum)
{
   if(root==NULL || sum==0)
      return false;
      
   if(!root->left && !root->right && sum-root->data == 0) 
      return true;
   
   return( hasPathSum(root->left,sum-root->data)|| hasPathSum(root->right,sum-root->data) );
   
}
