Problem Statement : https://www.geeksforgeeks.org/write-an-efficient-c-function-to-convert-a-tree-into-its-mirror-tree/

/**************************** Time Comp : O(n) *****************************/

void mirror(Node* root) 
{
    if(root == NULL)
      return ;
      
    Node * temp=root->left;      //Swap Nodes 
    root->left=root->right;
    root->right=temp;
    
    mirror(root->left) ; 
    mirror(root->right) ;
       
}
