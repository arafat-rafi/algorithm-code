#include <bits/stdc++.h>
using namespace std;

int swapsCount = 0;

void Bubblesort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                swapsCount++;
            }
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
    for(int i=0; i<n; i++)
        cin >> a[i];

    Bubblesort(a, n);

    cout << "\nFinal Sorted Array: ";
    for(int i=0; i<n; i++)
        cout << a[i] << " ";

    cout << "\nTotal Swaps: " << swapsCount << endl;

    return 0;
}


/* Bubble Sort Ascending - Sample Input & Output

Input:
Enter number of elements: 5
Enter 5 elements: 5 4 3 2 1
After Pass 1: 4 3 2 1 5 
After Pass 2: 3 2 1 4 5 
After Pass 3: 2 1 3 4 5 
After Pass 4: 1 2 3 4 5 

Output:
Final Sorted Array: 1 2 3 4 5 
Total Swaps: 10

*/
