#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    long long fact[100005];

    fact[0] = 1;

    for(int i = 1; i <= n; i++){
        fact[i] = i * fact[i-1];
    }

    cout << fact[n] << endl;

    return 0;
}


/* Factorial – Sample Input & Output

Input:
5

Output:
120

*/