#include <bits/stdc++.h>
using namespace std;

void mergeArrays(int a[], int b[], int m, int n){
    int i = 0, j = 0, k = 0;
    int c[m+n];

    while(i < m && j < n){
        if(a[i] < b[j]){
            c[k++] = a[i++];
        }
        else{
            c[k++] = b[j++];
        }

        cout << "Step: ";
        for(int x = 0; x < k; x++){
            cout << c[x] << " ";
        }
        cout << endl;
    }

    while(i < m){
        c[k++] = a[i++];

        cout << "Step: ";
        for(int x = 0; x < k; x++){
            cout << c[x] << " ";
        }
        cout << endl;
    }

    while(j < n){
        c[k++] = b[j++];

        cout << "Step: ";
        for(int x = 0; x < k; x++){
            cout << c[x] << " ";
        }
        cout << endl;
    }

    cout << "\nFinal Merged Sorted Array: ";
    for(int x = 0; x < m+n; x++){
        cout << c[x] << " ";
    }
    cout << endl;
}

int main(){
    int m, n;

    cout << "Enter size of first array: ";
    cin >> m;

    cout << "Enter size of second array: ";
    cin >> n;

    int a[m], b[n];

    cout << "Enter " << m << " elements for array A: ";
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }

    cout << "Enter " << n << " elements for array B: ";
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    sort(a, a + m);
    sort(b, b + n);

    mergeArrays(a, b, m, n);

    return 0;
}


/* Merge Two Unsorted Array - Sample Input & Output

Input:
Enter size of first array: 5
Enter size of second array: 4
Enter 5 sorted elements for array A: 1 2 3 4 5
Enter 4 sorted elements for array B: 6 7 8 9

Output:
Step: 1 
Step: 1 2 
Step: 1 2 3 
Step: 1 2 3 4 
Step: 1 2 3 4 5 
Step: 1 2 3 4 5 6 
Step: 1 2 3 4 5 6 7 
Step: 1 2 3 4 5 6 7 8 
Step: 1 2 3 4 5 6 7 8 9 
Final Merged Sorted Array: 1 2 3 4 5 6 7 8 9

*/