Problem Statement  : https://practice.geeksforgeeks.org/problems/find-optimum-operation/0
/*
You are given a number N. You have to find the number of operations required to reach N from 0. You have 2 operations available:
1.Double the number
2.Add one to the number
*/
/****************** Time Comp : O(n) ************************/

int Minimum_Operations(int n)
{
	int dp[n+1];
	dp[0] = 0;
	    
  for(int i = 1; i <= n; i++)
	if(i % 2)
     dp[i] = dp[i-1] + 1;
	else
     dp[i] = dp[i/2] + 1;
     
	return dp[n];      
}
