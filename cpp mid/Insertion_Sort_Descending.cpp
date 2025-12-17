#include <bits/stdc++.h>
using namespace std;

int swapCount = 0;

void Insertionsort(int a[], int n){
    for(int i = 1; i < n; i++){
        int x = a[i];
        int j = i - 1;

        while(j >= 0 && a[j] < x){
            a[j+1] = a[j];
            j--;
            swapCount++;
        }

        a[j+1] = x;

        cout << "After Pass " << i << ": ";
        for(int k = 0; k < n; k++)
            cout << a[k] << " ";
        cout << endl;
    }
}

int main(){
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    Insertionsort(a, n);

    cout << "\nFinal Sorted Array: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\nTotal Swaps: " << swapCount << endl;

    return 0;
}


/* Insertion Sort Descending - Sample Input & Output

Input:
Enter number of elements: 5
Enter 5 elements: 1 2 3 4 5
After Pass 1: 2 1 3 4 5 
After Pass 2: 3 2 1 4 5 
After Pass 3: 4 3 2 1 5 
After Pass 4: 5 4 3 2 1

Output:
Final Sorted Array: 5 4 3 2 1 
Total Swaps: 10

*/