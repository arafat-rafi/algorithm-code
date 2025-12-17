#include <bits/stdc++.h>
using namespace std;

int binarySearch(int A[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (A[mid] == key) {
            return mid;
        }
        else if (A[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int A[n];
    cout << "Enter " << n << " elements (sorted order): ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(A, n, key);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    }
    else {
        cout << "Element not found." << endl;
    }

    return 0;
}


/* Binary Search Iterative - Sample Input & Output

Input:
Enter number of elements: 6
Enter 6 elements (sorted order): 2 4 6 8 10 12
Enter element to search: 8

Output:
Element found at index: 3

*/