Problem Statement : https://www.geeksforgeeks.org/connect-nodes-level-level-order-traversal/

/******************************** Time Comp : O(n) ******************************/

void connect(Node *root)
{
   queue< Node* > q;
   q.push(root);
   q.push(NULL);
   
   while(!q.empty())
   {
       Node *current =q.front();
       q.pop();
       
       if(current!=NULL)
       {
           current->nextRight=q.front();
           
           if(current->left)
             q.push(current->left);
           if(current->right)
             q.push(current->right);
       }
       else if(!q.empty())
          q.push(NULL);
   }
}
