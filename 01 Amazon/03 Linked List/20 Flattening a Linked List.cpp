Problem Statement : https://www.geeksforgeeks.org/flattening-a-linked-list/

/* Node structure  used in the program
class Node{
	int data;
  Node * next;
  Node * bottom ;
}; */

Node *merge(Node*a,Node*b)
{
    Node *ans;
    if(a==NULL)
      return b;
    if(b==NULL)
      return a;
    
    if(a->data < b->data)
    {
        ans=a;
        ans->bottom=merge(a->bottom,b);
    }
    else
    {
        ans=b;
        ans->bottom=merge(a,b->bottom);
    }
    return ans;
}   
    
Node *flatten(Node *root)
{
   if(root==NULL ||root->next==NULL)
     return root;
     
   return merge(root,flatten(root->next)); 
}
