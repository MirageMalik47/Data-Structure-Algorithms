Problem Statement : https://www.geeksforgeeks.org/zigzag-tree-traversal/

/* Time Comp : O(n) , Space Comp : O(n)*/

void zigZagOrder(Node *root) 
{
  stack < Node* > s1;
  stack < Node* > s2;
  s1.push(root);
  
  while(1)
  {
     while(!s1.empty())
     {
       Node* current = s1.top();
       s1.pop();
       cout<<current->data<<" ";
       if(current->left!=NULL)
          s2.push(current->left);
       if(current->right!=NULL)
          s2.push(current->right);
     }
    
    while(!s2.empty())
    {
      Node *current1 = s2.top();
      s2.pop();
      cout<<current1->data<<" ";
      if(current1->right!=NULL)
         s1.push(current1->right);
      if(current1->left!=NULL)
         s1.push(current1->left);
    }
    
    if(s1.empty() && s2.empty())
    break;
  }
}
