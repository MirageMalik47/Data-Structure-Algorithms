/* The person can climb either 1 stair or 2 stairs at a time. 
   Count the number of ways, the person can reach the top (order does matter  */
   
#include<bits/stdc++.h>
using namespace std;

int main() 
{
   int t; 
   cin>>t;
  
   int dp[100001]={0};
   dp[0]=0; dp[1]=1; dp[2]=2;
  
   for(int i=3;i<100001;i++)
   {
      dp[i]=(dp[i-1]+dp[i-2]);
      dp[i]=dp[i]%1000000007;
   }
   while(t--)
   {
       int n; 
       cin>>n;
       cout<<dp[n]<<endl;
   }
  return 0;
}

/* Ladders Problem - Count ways to reach the Nth stair with jump from 1 to k */
int countways(int n,int k)
{

    int *dp = new int[n+1];
    dp[0] = 1;
    
    for(int step=1;step<=n;step++)
    {
        dp[step] = 0;

        for(int j=1;j<=k;j++)
        {
            if(step-j>=0)
            {
              dp[step] += dp[step-j];
            }

        }
    }
    return dp[n];
}
int main()
{
   int n=5 , k=3;   //n is the nth  stair and k=3 means that it can take 1 , 2 , 3 Jumps per step  
   countways(n,k);
   
}
