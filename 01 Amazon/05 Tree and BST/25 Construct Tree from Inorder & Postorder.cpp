Problem Statement : https://www.geeksforgeeks.org/construct-a-binary-tree-from-postorder-and-inorder/ 

/************************ Time Comp : O(n^2) ******************************/

Node* helper(int in[], int inStart,int inEnd, int post[], int postStart,int postEnd)
{
  
  if(postStart>postEnd||inStart>inEnd)
  {
     return NULL;
  } 
  int val = post[postEnd];
  Node* p= new Node();
  p->data=val;
  
  int k=0;
  for(int i=inStart; i<=inEnd;i++)
  {
      if(val == in[i])
      {
          k=i;
          break;
      }    
  }
 int x=postStart + k;
  
  p->left = helper( in, inStart, k-1,post, postStart, x-(inStart + 1));
  p->right= helper( in, k+1 ,inEnd,post, x-inStart, postEnd-1);
 
  return p;
}

Node *buildTree(int in[], int post[], int n)
{
  int postStart=0;
  int postEnd=n-1;
  int inStart=0;
  int inEnd=n-1;
  
  return helper(in, inStart,inEnd,post,postStart,postEnd);
    
}
