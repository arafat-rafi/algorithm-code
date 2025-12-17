#include <bits/stdc++.h>
using namespace std;

int swapCount = 0;

void SelectionSort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        int k = i;
        for(int j = i+1; j < n; j++){
            if(a[j] > a[k]){
                k = j;
            }
        }

        if(k != i){
            swap(a[k], a[i]);
            swapCount++;
        }

        cout << "After Pass " << i+1 << ": ";
        for(int x = 0; x < n; x++){
            cout << a[x] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    SelectionSort(a, n);

    cout << "\nFinal Sorted Array: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\nTotal Swaps: " << swapCount << endl;

    return 0;
}


/* Selection Sort Descending - Sample Input & Output

Input:
Enter number of elements: 5
Enter 5 elements: 1 2 3 4 5
After Pass 1: 5 2 3 4 1 
After Pass 2: 5 4 3 2 1 
After Pass 3: 5 4 3 2 1 
After Pass 4: 5 4 3 2 1  

Output:
Final Sorted Array: 5 4 3 2 1 
Total Swaps: 2

*/