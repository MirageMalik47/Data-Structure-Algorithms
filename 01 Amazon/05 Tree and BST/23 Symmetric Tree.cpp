Problem Statement : https://www.geeksforgeeks.org/symmetric-tree-tree-which-is-mirror-image-of-itself/

/***************************** Time Comp : O(n) ********************/

bool isMirror(Node *root1 , Node *root2)
{
    if( root1 == NULL && root2 == NULL) return true;
    if( root1 == NULL || root2 == NULL) return false;
    if( root1->data != root2->data) return false;
    return isMirror(root1->left,root2->right) && 
                     isMirror(root1->right,root2->left);
}

bool isSymmetric(Node* root)
{
	if(root == NULL)
	 return true;
	return isMirror(root->left,root->right) ;
}
