Problem Statement : https://www.geeksforgeeks.org/egg-dropping-puzzle-dp-11/

/********************** Time Comp : O(nk^2) **********************/

int egg_drop(int N,int K)
{
    int i,j,x,temp,ans;
    
    int dp[K+1][N+1];
    
    for(i=0;i<=K;i++)
    {
        dp[i][0]=0;
        dp[i][1]=i;
    }
    for(j=0;j<=N;j++)
    {
        dp[0][j]=0;
        dp[1][j]=1;
    }
    
    for(i=2;i<=K;i++)
    {
        for(j=2;j<=N;j++)
        {
            ans=INT_MAX;
            for(x=1;x<=i;x++)
            {
               temp = 1+max( dp[x-1][j-1], dp[i-x][j]);
               if(temp < ans)
                  ans=temp;
            }
            dp[i][j]=ans;
        }
    }
    return dp[K][N];
}
