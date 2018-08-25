/* Time Comp : O(n) & Extra Space Required*/
/* The left view contains all nodes that are first nodes in their levels. A simple solution is to do level order traversal and 
print the first node in every level.*/

void leftView(Node* root)
{
  if(root == NULL)
   return ;   
  queue < Node* > q;
  q.push(root);
  q.push(NULL);
  cout<<root->data <<" ";
  while(!q.empty())
  {
    Node* current = q.front();
    q.pop();
    if(current == NULL)
    {
        if(!q.empty())
        {
            q.push(NULL);
            cout<< q.front()->data <<" ";
        }  
    }
    else
    {
       if(current->left!=NULL)
         q.push(current->left);
       if(current->right!=NULL)
          q.push(current->right);
    }
  }
}
