/*
Dynamic Programming can be used to find the longest common substring in O(m*n) time. 
The idea is to find length of the longest common suffix for all substrings of both strings and store these lengths in a table.
1.) if( i == 0 || j == 0)
      X[i]Y[j] = 0 ;
2.) if (X[i-1] == Y[j-1])
       X[i]Y[j] = X[i-1]Y[j-1] + 1 ;
3.) else 
       X[i]Y[j] = 0 ;
*/

/********************* Time Comp : O(n*m) and Space Comp : O(n*m) ********************************/

int FindLCSLength( string X , string Y , int m ,int n)
{
   int dp[m+1][n+1];
   int result=0;
   
   for(int i=0 ;i<=m;i++)
   {
     for(int j=0 ;j<=n ;j++)
     {
        if( i == 0 || j == 0 )
          dp[i][j] = 0;
          
        else if( X[i-1] == Y[j-1] )
        {
          dp[i][j] = dp[i-1][j-1] + 1 ;
          result = max( result , dp[i][j] );
        }
          
        else
          dp[i][j] = 0 ;    
      }
    }
    return result ;
}
