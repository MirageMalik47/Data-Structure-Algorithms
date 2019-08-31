Problem Statement : https://www.geeksforgeeks.org/print-nodes-in-top-view-of-binary-tree-set-2/

/******************************** Time Comp : O(n) *****************************/
void topView( Node *root)
{
    if (root == NULL)
        return;
 
    unordered_map<int, int> m;  //height_depth(hd) & Value;
    queue<pair<Node*, int>> q;  // Node & hd;
 
    q.push(make_pair(root, 0));
    
    while (!q.empty())
    {
        pair<Node*, int> p = q.front();
        Node *n = p.first;
        int hd = p.second;
        q.pop();
         
        if ( m.count(hd) == 0 )   // if horizontal value is not in the hashmap that means it is the first value with tha    
        {                          // horizontal distance so print it and store this value in hashmap
            m[hd] = n->data;
            cout<<n->data<<" ";
        }
         
        if (n->left != NULL)
            q.push(make_pair(n->left, hd-1));
         
        if (n->right != NULL)
            q.push(make_pair(n->right, hd+1));
    }
}
