#include<bits/stdc++.h>
using namespace std;

int Min_Number_of_Coins(int *arr,int coins,int amount)
{
    int dp[amount+1];
    for(int i=0;i<=amount;i++)
      dp[i]=INT_MAX;
      
    dp[0]=0;
    
    for(int i=1 ; i<=amount ; i++)
    {
        for(int j=0 ; j <coins ; j++)
        {
            if( arr[j]<= i )
            { 
                int remaining = dp[i - arr[j]] ;
                if(remaining != INT_MAX)
                  dp[i]=min( dp[i], remaining + 1);
            }
        }
    }
    return dp[amount];
}

int main()
{
	  int amount,coins;
	  cin>>amount>>coins;
	  
	  int *arr=new int [coins];
	  for(int i=0;i<coins;i++)
	   cin>>arr[i];
	  
	  cout<<Min_Number_of_Coins(arr,coins,amount);
	  
	  delete []arr;
	return 0;
}
