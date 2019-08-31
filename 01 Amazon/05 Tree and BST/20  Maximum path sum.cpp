Problem Statement : https://www.geeksforgeeks.org/find-maximum-path-sum-two-leaves-binary-tree/

/************************ Time Comp : O(n) ************************/

int pathSum( Node* root, int &ans)
{
    if(root == NULL) 
     return 0;
    int l=pathSum(root->left, ans);
    int r=pathSum(root->right, ans);
    ans=max(ans,root->data+l+r);
    return root->data + max(l,r);
}
int maxPathSum( Node *root)
{
    int ans=0;
    int x=pathSum(root,ans);
    return ans;
}
