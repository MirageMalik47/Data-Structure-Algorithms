//Binomial Coefficient - DP
/* Find nCr for given n and r. */

#include <bits/stdc++.h>
using namespace std;
//Recursive solution
/*int binomialCoeff(int n,int k)
 {
     if(n==k || k==0)
         return 1;
     else
         return binomialCoeff(n-1,k-1)+binomialCoeff(n-1,k);
 }
*/

// Tabular method - Bottom to top
int binomialCoeff(int n,int k)
{
    if(n < k)
    return 0;

    int dp[n+1][k+1];
    for(int i=0;i<=n ;i++)
    {
        for(int j=0;j<=k;j++)
        {
            if(i==j || j==0)
             dp[i][j]=1;
            else
             dp[i][j]=( (dp[i-1][j-1]) + (dp[i-1][j]) ) % 1000000007;
        }
    }
    return dp[n][k];
}
int main()
{
    int n=4,k=2;
    cout<<binomialCoeff(n,k);
    return 0;
}
