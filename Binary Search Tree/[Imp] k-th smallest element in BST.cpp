/**************** Time Comp :O(n) & Space Comp: O(n) ********/
void inorder(Node* root,vector<int> &v)
{
  if(root == NULL)
    return ;
  
   inorder(root->left,v);
   v.push_back(root->data);
   inorder(root->right,v);  
}

int KthSmallestElement( Node* root, int k) 
{
  vector<int> v;
  inorder(root,v);
  return v[k-1];
}
