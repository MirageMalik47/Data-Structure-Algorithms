/* Time Comp : O(n) */
/* Just Reverse of Left View First Push The Right Side and than Left Side in queue and Print First Element of Every level */
void rightView(Node* root)
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
       if(current->right!=NULL)
          q.push(current->right);
       if(current->left!=NULL)
         q.push(current->left);
    }
  }
}
