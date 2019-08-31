Problem Statement : https://www.geeksforgeeks.org/k-smallest-elements-order-using-o1-extra-space/

/*********************** Time Comp : O(n) ************************/

void kthSmallestUtil(Node *root, int k, int &c) 
{ 
    if (root == NULL || c >= k) 
        return; 
    kthSmallestUtil(root->left, k, c);      //For Smallest Left First 
    if (++c == k) 
    { 
        cout << root->data; 
        return; 
    } 
    kthLargestUtil(root->right, k, c); 
} 
  
void kthLargest(Node *root, int k) 
{ 
    int c = 0; 
    kthLargestUtil(root, k, c); 
}


/**************** Time Comp :O(n) & Space Comp: O(n) ********/
void inorder(Node* root,vector<int> &v)
{
  if(root == NULL)
    return ;
  
   inorder(root->left,v);          //For Smallest Left First 
   v.push_back(root->data);
   inorder(root->right,v);  
}

int KthSmallestElement( Node* root, int k) 
{
  vector<int> v;
  inorder(root,v);
  return v[k-1];
}
