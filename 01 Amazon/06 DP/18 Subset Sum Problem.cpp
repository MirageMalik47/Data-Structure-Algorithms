Problem Statement  : https://www.geeksforgeeks.org/subset-sum-problem-dp-25/

/**************************** Time Comp : O(sum*n) ****************************/

bool isSubsetSum(int set[], int n, int sum) 
{  
    bool subset[n+1][sum+1]; 
   
    for (int i = 0; i <= n; i++)   // If sum is 0, then answer is true 
      subset[i][0] = true; 
   
    for (int i = 1; i <= sum; i++)  // If sum is not 0 and set is empty, then answer is false 
      subset[0][i] = false; 
  
     for (int i = 1; i <= n; i++)    // Fill the subset table in botton up manner 
     { 
       for (int j = 1; j <= sum; j++) 
       { 
         if( j < set[i-1]) 
            subset[i][j] = subset[i-1][j]; 
        
        if (j >= set[i-1]) 
           subset[i][j] = subset[i-1][j] || subset[i - 1][j-set[i-1]]; 
       } 
     }      
     return subset[n][sum]; 
} 
   
