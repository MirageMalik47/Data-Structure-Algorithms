/* Time Comp : O(n) */

void bottomView(Node *root)
{
  if (root == NULL)
        return;
 
    map<int, int> m;  //height_depth(hd) & Value;
    queue<pair<Node*, int>> q;  // Node & hd;
 
    q.push(make_pair(root, 0));
    
    while (!q.empty())
    {
        pair<Node*, int> p = q.front();
        Node *n = p.first;
        int hd = p.second;
        q.pop();
         
        m[hd] = n->data; //Last hd vaule is Stored in hashmap ;
 
        if (n->left != NULL)
            q.push(make_pair(n->left, hd-1));
         
        if (n->right != NULL)
            q.push(make_pair(n->right, hd+1));
    }
    map<int, int> :: iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->second<<" ";
    }
}
