Problem Statement : https://www.geeksforgeeks.org/get-level-of-a-node-in-a-binary-tree/

/**************************** Time Comp : O(n) *******************************/

int getLevel(struct Node *root, int target)
{
	if(root == NULL) 
    return 0;

  if(root->data == target) 
    return 1;

  int left = getLevel(node->left, target);
  if(left > 0) 
    return left + 1;

  int right = getLevel(node->right, target);
  if(right > 0) 
    return right + 1;
}
