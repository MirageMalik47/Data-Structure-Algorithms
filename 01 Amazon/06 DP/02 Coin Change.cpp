Problem Statement : https://www.geeksforgeeks.org/coin-change-dp-7/

/*
Given a value amount, if we want to make change for amount cents, and we have infinite supply of each of 
S = { S1, S2,., Sm}valued coins, how many ways can we make the change? The order of coins doesn’t matter.
For example, for amount = 4 and coins = {1,2,3}, there are four solutions: {1,1,1,1},{1,1,2},{2,2},{1,3}. 
So output should be 4.For amount = 10 and coins = {2, 5, 3, 6}, there are five solutions: {2,2,2,2,2}, 
{2,2,3,3}, {2,2,6}, {2,3,5} and {5,5}. So the output should be 5.
*/

int CoinChange(int coins[], int n, int amount)            //Coins is an array having n coins 
{
     int dp[amount+1]={0};
     dp[0]=1;

     for(int i=0 ;i<n ;i++)        
     {
         for(int j=1 ; j <= amount ; j++)
         {
           if(j >= coins[i])      
              dp[j] += dp[j-coins[i]] ;
         }
     }
     return dp[amount];
} 
