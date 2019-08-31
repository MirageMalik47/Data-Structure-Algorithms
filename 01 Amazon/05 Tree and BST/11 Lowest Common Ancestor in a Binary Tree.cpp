Problem Statement  : https://www.geeksforgeeks.org/lowest-common-ancestor-binary-tree-set-1/

/********************************* Time Comp : O(n) *****************************/

Node * LCA(Node* root ,int n1 ,int n2 )
{
   if(root == NULL)
    return NULL;
    
   if(root->data == n1 || root->data == n2)
    return root;
    
    Node *left=LCA(root->left,n1,n2);
    Node *right=LCA(root->right,n1,n2);
    
    if(left == NULL && right == NULL)
      return NULL ;
    else if(left == NULL)
      return right;
    else if(right == NULL)
      return left;
    else
      return root;
}
