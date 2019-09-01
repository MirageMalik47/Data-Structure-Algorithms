Problem Statement  : https://www.geeksforgeeks.org/find-sum-left-leaves-given-binary-tree/

/************************** Time Comp : O(n) *****************************/

void helper(Node *root,int& sum)
{
    if(root==NULL)
      return;
      
    if(root->left && root->left->left==NULL && root->left->right==NULL)
      sum+=root->left->data;
      
     helper(root->left,sum);
     helper(root->right,sum);
}
int leftLeafSum(Node* root)
{
    int sum=0;
    helper(root,sum);
    return sum;
}
