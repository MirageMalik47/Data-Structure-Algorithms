Problem Statement : https://www.geeksforgeeks.org/longest-palindromic-subsequence-dp-12/

/**************************** Time Comp : O(n^2) ********************************/

int LCS(string A, string B){
    int m = A.size();
    int n = B.size();
    
    vector<vector<int> > dp(m + 1, vector<int> (n + 1, 0));
    
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(A[i - 1] == B[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
                
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    
    return dp[m][n];
}

int LPS(string X){
    string Y = X;
    reverse(Y.begin(), Y.end());
    int result = LCS(X, Y);
    return result;
}
