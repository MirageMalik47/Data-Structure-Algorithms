#include<bits/stdc++.h>
using namespace std;

void printfibbo(int n)
{
    long dp[n+2];
    dp[0]=0;
    dp[1]=1;
    for(int i=2 ;i <= n; i++)
       dp[i]=dp[i-1]+dp[i-2];
       
    for(int i=1;i <= n;i++)
       cout<<dp[i]<<" ";
}
int main()
{
	int n=7;
	printfibbo(n);
	return 0;
}
