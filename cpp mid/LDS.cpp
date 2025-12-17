// LDS = Longest Decreasing Subsequence
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int lds[n];
    for(int i = 0; i < n; i++){
        lds[i] = 1;
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[i]){
                lds[i] = max(lds[i], 1 + lds[j]);
            }
        }
    }

    int m = 0;
    for(int i = 0; i < n; i++){
        m = max(m, lds[i]);
    }

    cout << "Longest Decreasing Subsequence is: " << m << endl;

    return 0;
}


/* Longest Decreasing Subsequence – Sample Input & Output

Input:
6
10 5 8 3 2 1

Output:
Longest Decreasing Subsequence is: 4

*/