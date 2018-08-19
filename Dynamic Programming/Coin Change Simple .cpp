#include<bits/stdc++.h>
using namespace std;

int CoinChange(int arr[],int coin,int amount)
{
     int dp[amount+1]={0};
     dp[0]=1;

     for(int i=0 ;i<coin ;i++)        
     {
         for(int j=1 ; j <= amount ; j++)
         {
           if(j >= arr[i])      
              dp[j] += dp[j-arr[i]] ;
         }
     }
     return dp[amount];
}
int main()
{
    int arr[] = {1, 2, 3};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = 4;
    cout<<CoinChange(arr,m,n);
    return 0;
}
