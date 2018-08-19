//Coin Change Problem - How many ways can we make the change
//Print number of possible ways to make change for N cents.
//Number of Combination to make N amount
#include<bits/stdc++.h>
using namespace std;

int CoinChange(int arr[],int m,int n){
     int dp[m+1][n+1];

     for(int i=0;i<=m;i++)
         dp[i][0]=1;

     for(int i=1;i<=n;i++)
         dp[0][i]=0;

     for(int i=1;i<=m;i++)
     {
         for(int j=1;j<=n;j++)
         {
             dp[i][j]=dp[i-1][j];
             if(j-arr[i-1]>=0)
                 dp[i][j]+=dp[i][j-arr[i-1]];
         }
     }
     return dp[m][n];
 }
int main()
{
    int arr[] = {1, 2, 5};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = 4;
    cout<<CoinChange(arr,m,n)<<endl;
	return 0;
}
