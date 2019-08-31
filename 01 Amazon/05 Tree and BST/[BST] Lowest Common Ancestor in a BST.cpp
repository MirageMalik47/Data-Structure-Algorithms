Problem Statement : https://www.geeksforgeeks.org/lowest-common-ancestor-in-a-binary-search-tree/ 

/********************* Time comp : O(h) where h is height of tree ************************/

Node* LCA(Node *root, int n1, int n2)
{
   if(root == NULL)
    return NULL;
    
   if(root->data > n1 && root->data > n2)  // If both n1 and n2 are smaller than root, then LCA lies in left
        return LCA(root->left,n1,n2);
        
   if(root->data < n1 && root->data < n2)   // If both n1 and n2 are greater than root, then LCA lies in right
        return LCA(root->right,n1,n2);       

    return root;
}
