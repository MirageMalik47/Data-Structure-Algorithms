Problem Statement  : https://www.geeksforgeeks.org/check-if-a-binary-tree-is-subtree-of-another-binary-tree/
                   : https://www.geeksforgeeks.org/check-binary-tree-subtree-another-binary-tree-set-2/  (Fail in Edge Cases) -> O(n)
                   
 /********************* Time Comp : O(n^2) *****************************/
 
 bool areIdentical(Node * root1, Node *root2)  
{  
    /* base cases */
    if (root1 == NULL && root2 == NULL)  
        return true;  
  
    if (root1 == NULL || root2 == NULL)  
        return false;  
    return (root1->data == root2->data &&  
            areIdentical(root1->left, root2->left) &&  
            areIdentical(root1->right, root2->right) );  
}  

bool isSubtree(Node *T, Node *S)  
{  
    if (S == NULL)    //Base Case 
        return true;  
  
    if (T == NULL)   //Base Case
        return false;  
  
    if (areIdentical(T, S))  // if both are same to same then return from here
        return true;  

    return isSubtree(T->left, S) ||  isSubtree(T->right, S);  
}
 
 
