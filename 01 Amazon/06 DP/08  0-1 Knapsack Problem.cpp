Problem Statement  : https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/

/*********************** Time Comp : O(nW) ****************************/

int knapsack(int val[],int wt[],int n,int W)
{
    int dp[n+1][W+1];
    
    for(int i=0;i<=n;i++)   //for each item
    {
        for(int w=0;w<=W;w++)   //considering each possible capacity of the knapsack
        {
            if(i==0 || w==0)
            dp[i][w]=0;
            else if(wt[i-1] <= w)
            dp[i][w]=max( val[i-1] + dp[i-1][w-wt[i-1]], dp[i-1][w]);
            else
            dp[i][w]=dp[i-1][w];
        }
    }   
    return dp[n][W];
}
