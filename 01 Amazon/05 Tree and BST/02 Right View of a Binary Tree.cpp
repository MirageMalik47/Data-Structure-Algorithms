Problem Statement  : https://www.geeksforgeeks.org/print-right-view-binary-tree-2/

/***************************** Time Comp : O(n) ************************/

void rightviewutil(Node* root,int level,int *max_level)
{
    if(root==NULL)
        return;
    if( *max_level < level )
    {
        cout<<root->data;
        *max_level = level;
    }
    rightviewutil(root->right,level+1,max_level);
    rightviewutil(root->left,level+1,max_level);
}
void rightView(Node *root)
{
    int max_level=0;
    rightviewutil(root, 1, &max_level);
}


/***************************** Time Comp : O(n) with Queue ************************/

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

