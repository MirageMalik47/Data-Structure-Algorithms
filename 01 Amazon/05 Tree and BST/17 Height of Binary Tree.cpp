Problem Statement : https://www.geeksforgeeks.org/write-a-c-program-to-find-the-maximum-depth-or-height-of-a-tree/

/********************* Time Comp : O(n) ***********************/

int height(Node* root)
{
   if(root == NULL)
     return 0;
    return  max( height(root->left) , height(root->right) ) + 1;
}
