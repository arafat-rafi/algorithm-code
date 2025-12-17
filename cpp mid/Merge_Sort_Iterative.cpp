#include <bits/stdc++.h>
using namespace std;

void merge(int A[], int l, int mid, int h) {
    vector<int> temp;
    int i = l, j = mid + 1;

    while (i <= mid && j <= h) {
        if (A[i] <= A[j]) {
            temp.push_back(A[i++]);
        }
        else {
            temp.push_back(A[j++]);
        }
    }

    while (i <= mid) {
        temp.push_back(A[i++]);
    }

    while (j <= h) {
        temp.push_back(A[j++]);
    }

    for (int k = 0; k < temp.size(); k++) {
        A[l + k] = temp[k];
    }

    cout << "After merging [" << l << "-" << h << "]: ";
    for (int k = l; k <= h; k++) {
        cout << A[k] << " ";
    }
    cout << endl;
}

void iterativeMergeSort(int A[], int n) {
    for (int size = 1; size < n; size *= 2) {
        for (int left = 0; left < n - 1; left += 2 * size) {
            int mid = min(left + size - 1, n - 1);
            int right = min(left + 2 * size - 1, n - 1);
            merge(A, left, mid, right);
        }
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

    iterativeMergeSort(A, n);

    cout << "Final Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}


/* Merge Sort Iterative - Sample Input & Output

Input:
Enter number of elements: 6
Enter 6 elements: 2 6 3 7 8 4

Output:
After merging [0-1]: 2 6 
After merging [2-3]: 3 7 
After merging [4-5]: 4 8 
After merging [0-3]: 2 3 6 7 
After merging [4-5]: 4 8 
After merging [0-5]: 2 3 4 6 7 8 
Final Sorted Array: 2 3 4 6 7 8 

*/