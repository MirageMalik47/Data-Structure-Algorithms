Pronblem Statement : https://www.geeksforgeeks.org/edit-distance-dp-5/

/************************ Time Comp : O(mn) ***********************/

int editDistDP(string s1, string s2, int m, int n) 
{  
    int dp[m+1][n+1]; 
  
    for (int i=0; i<=m; i++) 
    { 
        for (int j=0; j<=n; j++) 
        { 
            if (i==0)                             // If first string is empty
                dp[i][j] = j;  
            else if (j==0)                       // If Second string is empty
                dp[i][j] = i;  
            else if (s1[i-1] == s2[j-1])     // If last characters are same
                dp[i][j] = dp[i-1][j-1]; 
            else                                    
                dp[i][j] = 1 + min(dp[i][j-1], dp[i-1][j], dp[i-1][j-1]);  
        } 
    }  
    return dp[m][n]; 
} 
