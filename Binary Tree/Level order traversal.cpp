/* Using Queue Time Complexity O(n) */

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

/* Print LevelWise Time Complexity O(n^2)*/

int height(Node *root)
{
    if(root==NULL)
     return 0;    
    return max(height(root->left),height(root->right)) + 1 ; 
}

void printlevel(Node *root,int level)
{
    if(root == NULL)
      return ;
    if(level == 0)
    {
      cout<< root->data <<" ";
      return ;
    }
    printlevel(root->left , level-1); 
    printlevel(root->right , level-1);
}

void levelOrder(Node* root)
{
   int h=height(root);
   for(int depth=0; depth<=h ; depth++)
   {
       printlevel(root,depth);
   }
}
