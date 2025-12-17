#include <bits/stdc++.h>
using namespace std;

void merge(int A[], int l, int mid, int h){
    int n1 = mid - l + 1;
    int n2 = h - mid;
    int L[n1], R[n2];

    for(int i = 0; i < n1; i++){
        L[i] = A[l + i];
    }
    for(int i = 0; i < n2; i++){
        R[i] = A[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;

    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            A[k++] = L[i++];
        }
        else{
            A[k++] = R[j++];
        }

        cout << "Current Array: ";
        for(int x = 0; x <= h; x++){
            cout << A[x] << " ";
        }
        cout << endl;
    }

    while(i < n1){
        A[k++] = L[i++];

        cout << "Current Array: ";
        for(int x = 0; x <= h; x++){
            cout << A[x] << " ";
        }
        cout << endl;
    }

    while(j < n2){
        A[k++] = R[j++];

        cout << "Current Array: ";
        for(int x = 0; x <= h; x++){
            cout << A[x] << " ";
        }
        cout << endl;
    }
}

void mergeSort(int A[], int l, int h){
    if(l < h){
        int mid = (l + h) / 2;
        mergeSort(A, l, mid);
        mergeSort(A, mid + 1, h);
        merge(A, l, mid, h);
    }
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int A[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    mergeSort(A, 0, n - 1);

    cout << "\nFinal Sorted Array: ";
    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

/* Merge Sort Recursive - Sample Input & Output

Input:
Enter size of first array: 5
Enter size of second array: 4
Enter 5 elements for array A: 5 4 3 2 1
Enter 4 elements for array B: 9 8 7 6

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