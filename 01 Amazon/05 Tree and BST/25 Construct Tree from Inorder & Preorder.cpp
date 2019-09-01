Problem Statement : https://www.geeksforgeeks.org/construct-tree-from-given-inorder-and-preorder-traversal/

/************************ Time Comp : O(n^2) ********************/

int Search(int *inorder,int inStart ,int inEnd, int val)
{
  for(int i=inStart; i<=inEnd;i++)
  {
      if(val == inorder[i] )
          return i ;        
  }
}

Node* helper(int *preorder,int preStart,int preEnd, int *inorder, int inStart,int inEnd)
{
  
  if(preStart>preEnd || inStart>inEnd)
     return NULL;
  
  int val = preorder[preStart];
  Node *p = new Node;
  p->data=val;
  
  int k = Search( inorder, inStart , inEnd, val);
  int x=k-inStart;
  
  p->left = helper(preorder, preStart+1, preStart+x, inorder, inStart, k-1);
  p->right= helper(preorder, preStart+(x+1), preEnd, inorder, k+1 ,inEnd);
 
  return p;
}

Node* buildTree(int in[],int pre[], int inStrt, int inEnd)
{
  int preStart=0; int inStart=0;
  int preEnd=inEnd; // int inEnd=inEnd;

  return helper(pre,preStart,preEnd,in,inStart,inEnd);
}
