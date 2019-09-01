Problem Statment : https://www.geeksforgeeks.org/print-leftmost-and-rightmost-nodes-of-a-binary-tree/

/**************************** Time Comp : O(n) ******************************/

void printCorner(Node *root)
{
      queue<Node *>q;
      q.push(root);
      while(!q.empty())
      {
          int siz=q.size();
          for(int i=0;i<siz;i++)
          {
              Node *temp=q.front();
              q.pop();
              if(i==0)
                cout<<temp->key<<" ";
              else if(i==siz-1)
                cout<<temp->key<<" ";
             
              if(temp->left)
                q.push(temp->left);
            
              if(temp->right)
                q.push(temp->right);    
          }
      }
}

