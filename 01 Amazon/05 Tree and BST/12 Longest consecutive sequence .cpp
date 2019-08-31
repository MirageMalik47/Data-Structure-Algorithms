Problem Statement  : https://www.geeksforgeeks.org/longest-consecutive-sequence-binary-tree/

/************************** Time Comp : O(n) *****************************/

void longestConsecutiveUtil(Node* root, int curLength, int expected, int& res) 
{ 
    if (root == NULL) 
        return; 
        
    if (root->data == expected) 
        curLength++; 
    else
        curLength = 1; 
        
    res = max(res, curLength);                           //  update the maximum by current length 
    
    longestConsecutiveUtil(root->left, curLength, root->data + 1, res); 
    longestConsecutiveUtil(root->right, curLength, root->data + 1, res); 
} 

int longestConsecutive(Node* root) 
{ 
    if (root == NULL) 
      return 0; 
    int res = 0; 
    
    longestConsecutiveUtil(root, 0, root->data, res); 
    
    if(res == 1)
     return -1;
    else
    return res; 
}
