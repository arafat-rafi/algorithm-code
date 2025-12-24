#include<bits/stdc++.h>
using namespace std;
int main () {
  int n, amount;
  cin >> n >> amount;
  int coin[n];
  for (int i = 0; i < n; i++) {
    cin >> coin[i];
  }
  const int inf = 1e9;
  int coins[n+1][amount+1];
  for (int i = 0; i <= n; i++) {
    coins[i][0] = 0;
  }
  for (int j = 1; j <= amount; j++) {
    coins[0][j] = inf;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= amount; j++) {
      if (j >= coin[i-1]) {
        coins[i][j] = min(coins[i-1][j], 1 + coins[i][j-coin[i-1]]);
      }
      else {
        coins[i][j] = coins[i-1][j];
      }
    }
  }
  cout << coins[n][amount];
  return 0;
}