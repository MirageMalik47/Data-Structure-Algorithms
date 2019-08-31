Problem Statement  : https://www.geeksforgeeks.org/check-if-a-given-binary-tree-is-sumtree/

Approach  : 
1) If the node is a leaf node then sum of subtree rooted with this node is equal to value of this node.
2) If the node is not a leaf node then sum of subtree rooted with this node is twice the value of this node 
   (Assuming that the tree rooted with this node is SumTree).


/************************* Time Comp : O(n) ***************************/

int isLeaf(Node* root) 
{ 
    if(root == NULL) 
        return 0; 
    if(root->left == NULL && root->right == NULL) 
        return 1; 
    return 0; 
} 
  
bool isSumTree(Node* root) 
{ 
    int ls; // for sum of nodes in left subtree 
    int rs; // for sum of nodes in right subtree 
  
    if(root == NULL || isLeaf(root)) 
        return true; 
  
    if( isSumTree(root->left) && isSumTree(root->right)) 
    { 
 
        if(root->left == NULL)  // Get the sum of nodes in left subtree
            ls = 0; 
        else if(isLeaf(root->left)) 
            ls = root->left->data; 
        else
            ls = 2*(root->left->data); 
        
        if(root->right == NULL)  // Get the sum of nodes in right subtree 
            rs = 0; 
        else if(isLeaf(root->right)) 
            rs = root->right->data; 
        else
            rs = 2*(root->right->data); 
       
        return(root->data == ls + rs); 
    } 
  
    return false; 
}


/*********************** Time Comp : O(n^2) ***************************/
int sum(struct node *root) 
{ 
   if(root == NULL) 
     return 0; 
   return sum(root->left) + root->data + sum(root->right); 
} 

bool isSumTree(struct node* node) 
{ 
  if(node == NULL || (node->left == NULL && node->right == NULL)) 
      return true; 
  
  int ls = sum(node->left); 
  int rs = sum(node->right); 
  
  if((node->data == ls + rs)&&  isSumTree(node->left) && isSumTree(node->right)) 
      return true;  
   return false; 
} 



