#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, W;
  cin >> n >> W;
  int wt[100], P[100];
  for (int i = 0; i < n; i++){
    cin >> P[i] >> wt[i];
  }
  int dp[1005][1005];
  memset(dp, 0, sizeof(dp));
  for (int i = 1; i <= n; i++){
    for (int w = 1; w <= W; w++)
    {
      if (wt[i - 1] <= w)
      {
        dp[i][w] = max(P[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
      }
      else
      {
        dp[i][w] = dp[i - 1][w];
      }
    }
  }

  cout << dp[n][W] << endl;
  return 0;
}
