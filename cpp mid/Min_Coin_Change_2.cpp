#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, A;
    cin >> n >> A;

    int coin[105];
    for(int i = 0; i < n; i++){
        cin >> coin[i];
    }

    int dp[10005];
    for(int i = 0; i <= A; i++){
        dp[i] = 1000000;
    }

    dp[0] = 0;

    for(int i = 1; i <= A; i++){
        for(int j = 0; j < n; j++){
            if(coin[j] <= i){
                dp[i] = min(dp[i], 1 + dp[i - coin[j]]);
            }
        }
    }

    if(dp[A] == 1000000){
        cout << "Not Possible" << endl;
    }
    else{
        cout << "Minimum Coins: " << dp[A] << endl;
    }

    return 0;
}


/* Minimum Coins – Sample Input & Output

Input:
3 11
1 2 5

Output:
Minimum Coins: 3

*/