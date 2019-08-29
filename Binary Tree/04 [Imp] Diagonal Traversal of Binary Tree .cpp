// Problem : https://www.geeksforgeeks.org/diagonal-traversal-of-binary-tree/

void diagonalPrintUtil(Node* root, int d, map<int, vector<int>> &diagonalPrint) 
{ 
    if (!root)       // Base case 
        return;      
    diagonalPrint[d].push_back(root->data);         // Store all nodes of same line together as a vector 
    diagonalPrintUtil(root->left, d + 1, diagonalPrint);      // Increase the vertical distance if left child 
    diagonalPrintUtil(root->right, d, diagonalPrint);      // Vertical distance remains same for right child 
} 
  
void diagonalPrint(Node* root) 
{  
    map<int, vector<int> > diagonalPrint; 
    diagonalPrintUtil(root, 0, diagonalPrint); 
  
    for (auto it = diagonalPrint.begin(); it != diagonalPrint.end(); ++it) 
    { 
        for (auto itr = it->second.begin(); itr != it->second.end(); ++itr) 
            cout << *itr  << ' '; 
    } 
} 
