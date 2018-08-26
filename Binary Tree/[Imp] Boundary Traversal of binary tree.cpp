/* Time Comp : O(n) */

void printleft(Node *root)
{
    if(root == NULL)
      return ;
      
    if(root->left!=NULL)
    {
       cout<<root->data <<" ";    
       printleft(root->left);   
    }
      
    else if(root->right!=NULL)
    {
       cout<<root->data <<" ";
       printleft(root->right);
    }  
}

void printleaf(Node *root)
{
    if(root == NULL)
     return ;
     
    if(root->left == NULL && root->right == NULL)
     cout<<root->data<<" ";
     
    printleaf(root->left);
    printleaf(root->right);
}
void printright(Node *root)
{
    if(root == NULL)
      return ;
    if(root->left == NULL && root->right == NULL)
     return ;
     
    if(root->right!=NULL)
        printright(root->right) ;
    else if(root->left!=NULL)
        printright(root->left);
        
    cout<<root->data <<" ";
}

void printBoundary(Node *root)
{
    cout<<root->data<<" ";
    printleft(root->left);
    printleaf(root);
    printright(root->right);
}
