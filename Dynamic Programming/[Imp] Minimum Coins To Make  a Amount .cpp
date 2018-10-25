/*
Given a value V, if we want to make change for V cents, and we have infinite supply of each of C = { C1, C2, .. , Cm} valued coins, 
what is the minimum number of coins to make the change?
Examples:

Input: coins[] = {25, 10, 5}, V = 30
Output: Minimum 2 coins required
We can use one coin of 25 cents and one of 5 cents 

Input: coins[] = {9, 6, 5, 1}, V = 11
Output: Minimum 2 coins required
We can use one coin of 6 cents and 1 coin of 5 cents

*/

/******************************** Time Comp : O(n*amount) ************************/

#include<bits/stdc++.h>
using namespace std;

int Min_Number_of_Coins(int *arr,int coins,int amount)
{
    int dp[amount+1];
    for(int i=0;i<=amount;i++)
      dp[i]=INT_MAX;
      
    dp[0]=0;
    
    for(int i=1 ; i<=amount ; i++)
    {
        for(int j=0 ; j <coins ; j++)
        {
            if( arr[j]<= i )
            { 
                int remaining = dp[i - arr[j]] ;
                if(remaining != INT_MAX)
                  dp[i]=min( dp[i], remaining + 1);
            }
        }
    }
    return dp[amount];
}

int main()
{
     int amount,coins;
     cin>>amount>>coins;
	  
     int *arr=new int [coins];
     for(int i=0;i<coins;i++)
      cin>>arr[i];
	  
     cout<<Min_Number_of_Coins(arr,coins,amount);
     
     delete []arr;
     return 0;
}
