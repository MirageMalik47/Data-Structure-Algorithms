Problem Statement : https://www.geeksforgeeks.org/maximum-length-chain-of-pairs-dp-20/

/********************** Time Comp : O(n^2) ************************/

struct val{
	int first;
	int second;
};

bool check(val a,val b)
{
    return a.first < b.first;
}

int maxChainLen(struct val p[],int n)
{
    sort(p,p+n,check);
    if(n==0)
        return 0;
    int dp[n];
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        dp[i]=1;
        for(int j=0;j<i;j++)
        {
            if(p[j].second<p[i].first&&dp[i]<dp[j]+1)
                dp[i]=dp[j]+1;
        }
        ans=max(ans,dp[i]);
    }
    return ans;
}
