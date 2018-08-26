
bool isMirror(Node *root1 , Node *root2)
{
    if( root1 == NULL && root2 == 0) return true;
    if( root1 == NULL || root2 == 0) return false;
    if( root1->key != root2->key) return false;
    return isMirror(root1->left,root2->right) && 
                        isMirror(root1->right,root2->left);
}

bool isSymmetric(Node* root)
{
	if(root == NULL)
	 return true;
	return isMirror(root->left,root->right) ;
}
