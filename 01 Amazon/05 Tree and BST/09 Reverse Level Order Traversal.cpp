Problem Statement  : https://www.geeksforgeeks.org/reverse-level-order-traversal/

/************************************** Time Comp : O(n) *********************************/
void reversePrint(Node *root)
{
    queue<Node*> q;
    q.push(root);
    stack<Node*> st;
    while(!q.empty())
    {
        Node* temp = q.front();
        st.push(temp);
        if(temp->right != NULL)
            q.push(temp->right);
        if(temp->left!=NULL)
            q.push(temp->left);
        q.pop();
    }
    while(!st.empty())
    {
        cout<<st.top()->data<<" ";
        st.pop();
    }
}
