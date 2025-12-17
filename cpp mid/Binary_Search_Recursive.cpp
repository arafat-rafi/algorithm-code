#include <bits/stdc++.h>
using namespace std;

int recursiveBinarySearch(int A[], int low, int high, int key) {
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (A[mid] == key) {
        return mid;
    }
    else if (A[mid] < key) {
        return recursiveBinarySearch(A, mid + 1, high, key);
    }
    else {
        return recursiveBinarySearch(A, low, mid - 1, key);
    }
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

    int result = recursiveBinarySearch(A, 0, n - 1, key);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    }
    else {
        cout << "Element not found." << endl;
    }

    return 0;
}


/* Binary Search Recursive - Sample Input & Output

Input:
Enter number of elements: 7
Enter 7 elements (sorted order): 1 3 5 7 9 11 13
Enter element to search: 9

Output:
Element found at index: 4

*/