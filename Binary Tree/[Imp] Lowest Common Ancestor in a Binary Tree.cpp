/*
The idea is to traverse the tree starting from root. If any of the given keys (n1 and n2) matches with root, 
then root is LCA (assuming that both keys are present). If root doesn’t match with any of the keys, 
we recur for left and right subtree. The node which has one key present in its left subtree and 
the other key present in right subtree is the LCA. If both keys lie in left subtree, then left subtree has LCA also, 
otherwise LCA lies in right subtree.
*/

/* Time Comp : O(n)*/

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
