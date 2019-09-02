Problem Statement : https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/
                  : https://www.geeksforgeeks.org/longest-monotonically-increasing-subsequence-size-n-log-n/
                  
/********************** Time Comp : O(n^2) **************************/

int LIS(int *arr,int n)
{
    int dp[n];
    for(int i=0;i<n;i++)
        dp[i]=1;
        
    int ans = 1 ;    
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[i]>arr[j])
              dp[i]=max(dp[i],dp[j]+1);
        }
        ans=max(ans,dp[i]);
    }
    return ans;
}
