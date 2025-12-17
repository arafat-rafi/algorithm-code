#include <bits/stdc++.h>
using namespace std;

int partition(int A[], int low, int high) {
    int pivot = A[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (A[j] <= pivot) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[high]);
    return i + 1;
}

void quickSort(int A[], int low, int high) {
    if (low < high) {
        int pi = partition(A, low, high);

        quickSort(A, low, pi - 1);
        quickSort(A, pi + 1, high);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int A[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    quickSort(A, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}


/* Quick Sort Recursive - Sample Input & Output

Input:
Enter number of elements: 6
Enter 6 elements: 10 3 7 1 9 5

Output:
Sorted Array: 1 3 5 7 9 10

*/