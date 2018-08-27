/************************** Time Comp: O(n)****************/

int sum(Node * root)
{
    if(!root)
     return 0;
    return root->data + sum(root->left) + sum(root->right); 
}

int countSubtreesWithSumX(Node* root, int x)
{
   if(!root)
	  return 0;
    
   int ls=sum(root->left);
   int rs=sum(root->right);
   if( ls + rs + root->data == x)
     return 1 ;
    
   int a=countSubtreesWithSumX(root->left,x);
   int b=countSubtreesWithSumX(root->right,x);
    
   return a+b; 
}
