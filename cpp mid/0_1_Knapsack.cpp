#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, W;
    cin >> n >> W;

    int wt[100], P[100];

    for(int i = 0; i < n; i++){
        cin >> wt[i];
    }

    for(int i = 0; i < n; i++){
        cin >> P[i];
    }

    int dp[105][1005];

    memset(dp, 0, sizeof(dp));

    for(int i = 1; i <= n; i++){
        for(int w = 1; w <= W; w++){
            if(wt[i-1] <= w){
                dp[i][w] = max(P[i-1] + dp[i-1][w - wt[i-1]], dp[i-1][w]);
            }
            else{
                dp[i][w] = dp[i-1][w];
            }
        }
    }

    cout << dp[n][W] << endl;

    return 0;
}


/* 0/1 Knapsack – Sample Input & Output

Input:
4 7
1 3 4 5
1 4 5 7

Output:
9 

*/
