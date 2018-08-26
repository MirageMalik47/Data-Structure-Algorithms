/* Time Comp : O(n) */
int height(Node* root, int& ans)
{
    if (root == NULL)
        return 0;
 
    int lh = height(root->left, ans);
    int rh = height(root->right, ans);

    ans = max(ans, 1+lh+rh);
    return 1 + max(lh, rh);
}

int diameter(Node* root)
{
    if (root == NULL)
     return 0;
    int ans = INT_MIN; 
    int h = height(root, ans);
    return ans;
}

/* Time Comp : O(n) */
int height(Node * root)
{
    if(root == NULL)
     return 0;
     
    return 1 + max(height(root->left),height(root->right)); 
}
int diameter(Node* root)
{
   if(root == NULL)
     return 0;
     
   int a=height(root->left);
   int b=height(root->right);
   
   return 1 + a + b ;
}
