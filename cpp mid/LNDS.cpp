// LNDS = Longest Non-Decreasing Subsequence
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int lnds[n];
    for(int i = 0; i < n; i++){
        lnds[i] = 1;
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(arr[j] <= arr[i]){
                lnds[i] = max(lnds[i], 1 + lnds[j]);
            }
        }
    }

    int m = 0;
    for(int i = 0; i < n; i++){
        m = max(m, lnds[i]);
    }

    cout << "Longest Non-Decreasing Subsequence is: " << m << endl;

    return 0;
}


/* Longest Non-Decreasing Subsequence – Sample Input & Output

Input:
6
5 1 6 2 3 4

Output:
Longest Non-Decreasing Subsequence is: 5

*/