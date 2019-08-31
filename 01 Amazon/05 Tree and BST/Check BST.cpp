Problem Statement : https://www.geeksforgeeks.org/a-program-to-check-if-a-binary-tree-is-bst-or-not/

/******************************** Time Comp : O(n) ************************************/
bool checkbst(Node *root,int min ,int max)
{
    if(root == NULL)
     return true;
    
    if(root->data < min || root->data > max) 
     return false;
     
     return ( checkbst(root->left, min, root->data-1) &&
                checkbst(root->right, root->data+1, max) );
}
bool isBST(Node* root) 
{
    return checkbst(root,INT_MIN,INT_MAX);
}

/***************************** Inorder Traversal of BST is the Sorted Array****************/
/********************************** Time O(n) & Space O(n)********************************/
void inorder( Node *root ,vector<int> &v)
{
    if(root == NULL)
      return ;
      
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
bool isBST(Node* root) 
{
    vector <int > v;
    inorder(root,v);
    for(int i=1;i<v.size();i++)
    {
        if(v[i-1] > v[i])
         return false;
    }  
     return true;
}
