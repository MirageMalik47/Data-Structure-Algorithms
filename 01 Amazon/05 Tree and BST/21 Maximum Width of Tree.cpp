Problem Statement  : https://www.geeksforgeeks.org/maximum-width-of-a-binary-tree/

/************************** Time Comp : O(n) ***************************/

int  getMaxWidth(Node * root) 
{ 
    if (root == NULL) 
        return 0; 

    int result = 0; 
    queue<Node*> q; 
    q.push(root); 
    while (!q.empty()) 
    { 
        int count = q.size() ; 
        result = max(count, result); 
        while (count--) 
        { 
            Node *temp = q.front(); 
            q.pop(); 

            if (temp->left != NULL) 
                q.push(temp->left); 
            if (temp->right != NULL) 
                q.push(temp->right); 
        } 
    } 
    return result; 
} 
