Problem Statement : https://www.geeksforgeeks.org/print-nodes-dont-sibling-binary-tree/

Approach :
if root have left and right then they are sibling to each other else not

/********************** Time Comp : O(n) **************************/

void printSingles(struct node *root) 
{ 
    if (root == NULL) 
      return; 

    if (root->left != NULL && root->right != NULL) 
    { 
        printSingles(root->left); 
        printSingles(root->right); 
    } 
    
    else if (root->right != NULL)         // If left child is NULL and right is not, print right child and recur for right child 
    { 
        cout << root->right->data; 
        printSingles(root->right); 
    } 

    else if (root->left != NULL)         // If right child is NULL and left is not, print left child and recur for left child 
    { 
        cout << root->left->data; 
        printSingles(root->left); 
    } 
}

/********************* Print sibling and sort them ************************/

void help(Node *root , vector<int> &v)
{
    if(root == NULL)
     return;
     
   if(root->left == NULL && root->right != NULL)
     v.push_back(root->right->data);

   if(root->right == NULL && root->left != NULL)
      v.push_back(root->left->data);
     
   help(root->left,v);
   help(root->right,v);
}
void printSibling(Node* root)    
{
   vector<int > v;
   help(root,v);
   
   if(v.size()==0)
     cout<<"-1";
   else
   {
     sort(v.begin(), v.end());
     for(int i=0; i<v.size(); i++)
       cout<<v[i]<<" ";
   }
}
