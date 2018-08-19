/*
 A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous. 
 For example, “abc”, “abg”, “bdf”, “aeg”, ‘”acefg”, .. etc are subsequences of “abcdefg”.
*/
#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2,int n1 ,int n2)
{
    int dp[n1+1][n2+1];
    for(int i=0 ;i<=n1 ;i++)
    {
        for(int j=0; j<=n2 ;j++)
        {
            if( i==0 || j==0 )
               dp[i][j]=0;
              
            else if(s1[i-1] == s2[j-1])
               dp[i][j]=dp[i-1][j-1] + 1;
              
            else
               dp[i][j]= max( dp[i-1][j] ,dp[i][j-1] );
        }
    }
    return dp[n1][n2];
}
int main()
{
	  int n1,n2;
	  cin>>n1>>n2;
	  string s1,s2;
	  cin>>s1>>s2;
	  cout<<lcs(s1,s2,n1,n2);
	  cout<<endl;
    
	return 0;
}

