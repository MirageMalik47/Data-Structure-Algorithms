Problem Statement : https://www.geeksforgeeks.org/level-order-tree-traversal/

/*********************** Time Complexity O(n) *************************/

void levelOrder(Node* root)
{
  if(root == NULL)
   return ;
   
  queue < Node* > q;
  q.push(root);
  while(!q.empty())
  {
    Node* current = q.front();
    cout<<current->data<<" ";
    q.pop() ;
    
    if(current->left!=NULL)
      q.push(current->left);
    if(current->right!=NULL)
      q.push(current->right);
  }
}
