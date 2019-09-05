Problem Statement : https://www.geeksforgeeks.org/find-the-longest-path-in-a-matrix-with-given-constraints/

/************************** Time Comp : O(n^2) ********************************/

int main() 
{
	    int n;	    
	    cin>>n;
	    int a[n][n];
	    
	    for(int i=0;i<n;i++)
	        for(int j=0;j<n;j++)     
	            cin>>a[i][j];
	    int dp[n][n];
    
        for(int j=0;j<n;j++)
            dp[n-1][j] = a[n-1][j];
            
        for(int i=n-2;i>=0;i--)
        {
            for(int j = 0;j<n;j++)
            {
                if(j == 0)
                    dp[i][j] = max( dp[i+1][j] + a[i][j] , a[i][j] + dp[i+1][j+1]);
                else if(j == n-1)
                    dp[i][j] = max( dp[i+1][j] + a[i][j] , dp[i+1][j-1] + a[i][j]);
                else 
                    dp[i][j] = max( dp[i+1][j] + a[i][j] , max(dp[i+1][j-1]+a[i][j] , dp[i+1][j+1]+a[i][j]));
        }
        
        int max = 0;
        for(int i=0;i<n;i++)
        {
            if(dp[0][i] > max)
                max = dp[0][i];
         }      
        cout<<max;
	}
	return 0;
}
