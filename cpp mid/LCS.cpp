// LCS = Longest Common Subsequence
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1;
    cin >> s2;

    s1 = " " + s1;
    s2 = " " + s2;

    int m = s1.length() - 1;
    int n = s2.length() - 1;

    int dp[m + 5][n + 5];

    for(int i = 0; i <= m; i++){
        dp[i][0] = 0;
    }

    for(int j = 0; j <= n; j++){
        dp[0][j] = 0;
    }

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(s1[i] == s2[j]){
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else{
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << "Longest Common Subsequence is: " << dp[m][n] << endl;

    return 0;
}


/* Longest Common Subsequence – Sample Input & Output

Input:
abcde
ace

Output:
Longest Common Subsequence is: 3

*/