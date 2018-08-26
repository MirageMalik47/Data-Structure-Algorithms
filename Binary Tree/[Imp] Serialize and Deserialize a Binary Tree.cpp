
void serialize(Node *root,vector<int> &v)
{
    if(root == NULL)
    {
        v.push_back(-1);
        return;
    }
    v.push_back(root->data);
    serialize(root->left,v);
    serialize(root->right,v);
}

Node *deSer(int &i,vector<int> &a)
{
    if( i>=a.size( ))
        return NULL;
    if( a[i]==-1 )
    {
        i++;
        return NULL;
    }
    Node *root=newNode(a[i]);
    i++;
    root->left=deSer(i,a);
    root->right=deSer(i,a);
    return root;
}
Node * deSerialize(vector<int> &A)
{
   int i=0;
   return deSer(i,A);
}
