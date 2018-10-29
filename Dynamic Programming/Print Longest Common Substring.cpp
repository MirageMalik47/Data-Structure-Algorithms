
/*************************** Time Comp : O(n*m) and O(n*m) ***********************/
 void FindLCSLength( string X , string Y , int m ,int n)
{
   int dp[m+1][n+1];
   int result=0;
   int row=0,col=0;
   for(int i=0 ;i<=m;i++)
   {
     for(int j=0 ;j<=n ;j++)
     {
        if( i == 0 || j == 0 )
          dp[i][j] = 0;
          
        else if( X[i-1] == Y[j-1] )
        {
          dp[i][j] = dp[i-1][j-1] + 1 ;
          if( result < dp[i][j] )
           {
              row=i,col=j;
              result = dp[i][j];
            }     
        }
        else
          dp[i][j] = 0 ;    
      }
    }
   stack<char> v;  //Print Diagonally 
   while (dp[row][col] != 0) 
   { 
        v.push( X[row - 1] ); // or Y[col-1] //
        row--; 
        col--; 
    } 
   while(!v.empty())
   {
         cout<<v.top();
         v.pop();
    }
}
