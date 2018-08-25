/* print all the nodes separated by space which don't have sibling in the tree in sorted order if every node has a tree than print -1.*/
/*  A sibling is a brother or a sister */
void help(Node *root , vector<int> &v)
{
    if(root == NULL)
     return;
     
   if(root->left == NULL && root->right != NULL)
     v.push_back(root->right->data);

   if(root->right == NULL && root->left != NULL)
      v.push_back(root->left->data);
     
   help(root->left,v);
   help(root->right,v);
}
void printSibling(Node* root)    
{
   vector<int > v;
   help(root,v);
   
   if(v.size()==0)
     cout<<"-1";
   else
   {
     sort(v.begin(), v.end());
     for(int i=0; i<v.size(); i++)
       cout<<v[i]<<" ";
   }
}
