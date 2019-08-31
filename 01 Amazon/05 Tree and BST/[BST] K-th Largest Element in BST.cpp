Problem Statement : https://www.geeksforgeeks.org/kth-largest-element-in-bst-when-modification-to-bst-is-not-allowed/

/************************* Time Comp : O(h + k) *******************************/

void kthLargestUtil(Node *root, int k, int &c) 
{ 
    if (root == NULL || c >= k) 
        return; 
    
    kthLargestUtil(root->right, k, c);    //For Largest Right First
    
    if (++c == k) 
    { 
        cout << root->data; 
        return; 
    } 
    kthLargestUtil(root->left, k, c); 
} 
  
void kthLargest(Node *root, int k) 
{ 
    int c = 0; 
    kthLargestUtil(root, k, c); 
}

/*********************** Time Comp : O(n) & Space Comp : O(n) **********************/

void inorder(Node* root,vector<int> &v)
{
  if(root == NULL)
    return ;
  
   inorder(root->right,v);     //For Largest Right First
   v.push_back(root->data);
   inorder(root->left,v);  
}
void kthLargest(Node *root, int k)
{
  vector<int> v;
  inorder(root,v);
  cout<<v[k-1]<<endl;
}
