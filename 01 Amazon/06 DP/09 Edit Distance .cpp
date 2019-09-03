Pronblem Statement : https://www.geeksforgeeks.org/edit-distance-dp-5/

/************************ Time Comp : O(mn) ***********************/

int editDistDP(string str1, string str2, int m, int n) 
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
  
            else if (str1[i-1] == str2[j-1])     // If last characters are same
                dp[i][j] = dp[i-1][j-1]; 

            else                                  // If last characters are different   
                dp[i][j] = 1 + min(dp[i][j-1],  // Insert 
                                   dp[i-1][j],  // Remove 
                                   dp[i-1][j-1]); // Replace 
        } 
    }  
    return dp[m][n]; 
} 
