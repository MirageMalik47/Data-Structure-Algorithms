Problem Statement  : https://www.geeksforgeeks.org/find-closest-element-binary-search-tree/

/******************* Time Comp : O(h) where h is height of given BST **********************/

void helper(Node * root, int k, int &min_diff, int &ans) 
{ 
    if (root == NULL) 
        return ;    
    if (root->data == k) 
    { 
        ans = k; 
        return; 
    } 
    
    if (min_diff > abs(root->data - k))   // update min_diff and ans by checking current node value 
    { 
        min_diff = abs(root->data - k); 
        ans = root->data; 
    } 
  
    if (k < root->data)                  // if k is less than ptr->key then move in left subtree else in right subtree 
        helper(root->left, k, min_diff, ans); 
    else
        helper(root->right, k, min_diff, ans); 
} 
   
int closest_element(Node *root, int k) 
{ 
    int min_diff = INT_MAX, ans = -1;     
    helper(root, k, min_diff, ans);   
    return ans; 
} 
