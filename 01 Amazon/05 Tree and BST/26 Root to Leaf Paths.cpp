Problem Statememnt :  https://www.geeksforgeeks.org/given-a-binary-tree-print-all-root-to-leaf-paths/

/*************************** Time Comp : O(n^2) *********************************/

void printPathsNew(Node* root,vector<int> v)
{
    if(root==NULL)
        return;
        
    v.push_back(root->data);                     // append this node to the path array 
    if(root->left==NULL && root->right==NULL)   // it's a leaf, so print the path that led to here 
    {
        for(int i=0;i<v.size();i++)
            cout<<v[i];
    }
    else                                        // otherwise try both subtrees 
    {
        printPathsNew(root->left,v);
        printPathsNew(root->right,v);
    }
}
void printPaths(Node* root)
{
    vector<int> v;
    printPathsNew(root,v);
}
