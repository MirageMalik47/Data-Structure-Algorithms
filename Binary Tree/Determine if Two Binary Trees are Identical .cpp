
bool isIdentical(Node *r1, Node *r2)
{
    if( r1 == NULL && r2 == NULL)
      return true;
    if(r1 == NULL || r2 == NULL)
      return false;

    bool x = isIdentical(r1->left,r2->left);
    bool y = isIdentical(r1->right ,r2->right);
      
    if( x&&y )
     return true;
    else
     return false;
}
