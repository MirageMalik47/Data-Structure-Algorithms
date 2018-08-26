/* Given a Binary Tree (BT), convert it to a Doubly Linked List(DLL) In-Place. 
The left and right pointers in nodes are to be used as previous and next pointers respectively in converted DLL.
The order of nodes in DLL must be same as Inorder of the given Binary Tree. The first node of 
Inorder traversal (left most node in BT) must be head node of the DLL.*/


void BToDLL(Node *root, Node **head_ref)
{
    if(root == NULL) 
      return;
    static Node *prev = NULL;
    BToDLL(root->left,head_ref);
    if(*head_ref == NULL) 
    {
        *head_ref = root;
    }
    else
    {  
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    BToDLL(root->right,head_ref);
}
