Problem Statement : https://www.geeksforgeeks.org/count-ways-reach-nth-stair/

/*********************** Time Comp : O(nk)*************************/

// For k=2 i.e k=1 and k=2
int countways(int n)
{
   int dp[n+1]={0};
   
   dp[0]=0; dp[1]=1; dp[2]=2;
  
   for(int i=3;i<=n;i++)
      dp[i]=(dp[i-1]+dp[i-2]) ;
      
    return dp[n]  
}

/* Ladders Problem - Count ways to reach the Nth stair with jump from 1 to k */

int countways(int n, int k) 
{ 
	 int *dp = new int[n+1];
   dp[0] = 1;
    
   for(int step=1;step<=n;step++)
   {
        dp[step] = 0;
        for(int j=1;j<=k;j++)
        {
            if(step-j >= 0)
              dp[step] += dp[step-j];
        }
    }
    return dp[n];
} 
