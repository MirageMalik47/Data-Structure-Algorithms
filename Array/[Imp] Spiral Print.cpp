/************** Time Comp : O(n) **********************/

void spiralPrint(int input[][1000], int row, int col)
{
  int r=row,c=col; // c is col from end //  r is row from end 
  int i,k=0,l=0; //k is row from start // l is col from start

  while(k < r && l < c)
  {
    for(i = k; i < c; i++)
    {
      cout<<input[k][i]<<" ";
    }
    k++;
    for(i = k ; i < r ; i++)
    {
      cout<<input[i][c-1]<<" ";
    }
    c--;
    if( k < r )
    {
      for( i = c-1 ; i >= l; i--)
      {
        cout<<input[r-1][i]<<" ";
      }
      r--;
    }
    if( l < c )
    {
      for( i = r-1; i >= k; i--)
      {
        cout<<input[i][l]<<" ";
      }
      l++;      
    }    
  }	
}
