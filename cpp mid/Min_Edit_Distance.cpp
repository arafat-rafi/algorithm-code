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
    
    int E[m + 10][n + 10];

    for(int i = 0; i <= m; i++){
        E[i][0] = i;
    }

    for(int j = 0; j <= n; j++){
        E[0][j] = j;
    }

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(s1[i] == s2[j]){
                E[i][j] = E[i - 1][j - 1];
            }
            else{
                E[i][j] = 1 + 
                    min(min(E[i - 1][j], E[i][j - 1]), E[i - 1][j - 1]);
            }
        }
    }
       
    cout << E[m][n] << endl;

    return 0;
}


/* Minimum Edit Distance – Sample Input & Output

Input:
kitten
sitting

Output:
3

*/