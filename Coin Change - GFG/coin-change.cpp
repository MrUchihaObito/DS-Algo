//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int N, int sum) {

        // code here.
        long long int dp[sum+1][N+1];
        for(int i=0;i<=N;i++)
        {
            dp[0][i]=1;
        }
        for(int i=1;i<=sum;i++)
        {
            dp[i][0]=0;
        }
       // dp[0][0]=0;
        for(int i=1;i<=sum;i++)
        {
            for(int j=1;j<=N;j++)
            {
                dp[i][j]=dp[i][j-1];
                
                if(coins[j-1]<=i)
                {
                    dp[i][j]+=dp[i-coins[j-1]][j];
                }
                
            }
        }
        return dp[sum][N];
        
        
      /*  vector<vector<long long int>>dp(m+1,vector<long long int>(n+1,0));
        for(int i=0;i<=n;i++)
        {
            dp[0][i]=0;
        }
        for(int i=0;i<=m;i++)
        {
            dp[i][0]=1;
        }
        
        
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                dp[i][j]=dp[i-1][j];
                if(S[i-1]<=j)
                dp[i][j]+=dp[i][j-S[i-1]];
            }
        }
        return dp[m][n];*/
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends