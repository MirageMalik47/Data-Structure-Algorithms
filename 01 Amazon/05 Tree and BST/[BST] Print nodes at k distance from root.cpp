Problem Statement : https://www.geeksforgeeks.org/print-nodes-at-k-distance-from-root/

/****************************** Time Comp : O(n) ****************************/

void printKdistance(Node *root, int k)
{
    if(root == NULL)
      return ;
    
    if( k == 0)
    {
       cout<<root->data<<" ";
       return ;
    }  
    printKdistance(root->left,k-1);
    printKdistance(root->right,k-1);
}
