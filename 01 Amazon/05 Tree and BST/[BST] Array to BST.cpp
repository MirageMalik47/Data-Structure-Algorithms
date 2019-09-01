Problem Statement  : https://www.geeksforgeeks.org/sorted-array-to-balanced-bst/

/************************* Time Comp : O(n) **********************/

Node* sortedArrayToBST(int arr[], int start, int end) 
{ 
	if (start > end) 
	return NULL; 
    
	int mid = (start + end)/2;         /* Get the middle element and make it root */
	Node *root = new Node(arr[mid]); 
    
	root->left = sortedArrayToBST(arr, start, mid - 1);  // Recursively construct the left subtree and make it left child of root 
	root->right = sortedArrayToBST(arr, mid + 1, end);   // Recursively construct the right subtree and make it right child of root 
    
	return root; 
} 
