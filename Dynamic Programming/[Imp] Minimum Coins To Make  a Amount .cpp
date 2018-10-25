/*
Given a value V, if we want to make change for 'amount' cents, and we have infinite supply of each of C = { C1, C2, .. , Cm} valued coins, 
what is the minimum number of coins to make the change?
Examples:

Input: coins[] = {25, 10, 5}, amount = 30
Output: Minimum 2 coins required
We can use one coin of 25 cents and one of 5 cents 

Input: coins[] = {9, 6, 5, 1}, amount = 11
Output: Minimum 2 coins required
We can use one coin of 6 cents and 1 coin of 5 cents

*/

/******************************** Time Comp : O(n*amount) ************************/

int Min_Number_of_Coins(int *coins,int n,int amount)                         //coins is array having 'n' coins
{
    int dp[amount+1];
    for(int i=0;i<=amount;i++)
      dp[i]=INT_MAX;
      
    dp[0]=0;
    
    for(int i=1 ; i<=amount ; i++)
    {
        for(int j=0 ; j <n ; j++)
        {
            if( coins[j]<= i )
            { 
                int remaining = dp[i - coins[j]] ;
                if(remaining != INT_MAX)
                  dp[i]=min( dp[i], remaining + 1);
            }
        }
    }
    return dp[amount];
}
