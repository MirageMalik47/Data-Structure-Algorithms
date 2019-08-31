Problem Statement  : https://www.geeksforgeeks.org/print-binary-tree-vertical-order-set-2/

/************************** Interview Bit Solution ***************************/

void getverticalorder(TreeNode *root , int hd ,map< int ,vector<int> >&m)
{
    if(root == NULL)
     return ;

     m[hd].push_back(root->val);
     getverticalorder(root->left,hd-1,m);
     getverticalorder(root->right,hd+1,m); 
} 

vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* root) 
{
    map <int ,vector<int> > m;
    vector< vector<int > > v;
    int hd=0;
    getverticalorder(root,hd,m);
    
    map< int,vector<int> > :: iterator it ;
    for( it=m.begin() ; it!=m.end() ; it++)
    {
       v.push_back( it->second);
    }
    return v;
}

/**************************** GeeksforGeeks Solution ******************************/

void getverticalorder(Node *root , int hd ,map< int ,vector<int> >&m)
{
    if(root == NULL)
     return ;

     m[hd].push_back(root->data);
     getverticalorder(root->left,hd-1,m);
     getverticalorder(root->right,hd+1,m); 
}

void printVerticalOrder(Node* root)
{
    map <int ,vector<int> > m;
    int hd=0;
    getverticalorder(root,hd,m);

    map< int,vector<int> > :: iterator it ;
    for( it=m.begin() ; it!=m.end() ; it++)
    {
        for(int i=0; i < it->second.size() ; i++)
            cout<<it->second[i]<<" ";
        
        cout<<endl;
    }

}
