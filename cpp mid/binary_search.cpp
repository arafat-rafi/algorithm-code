#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n; 
  int a[100];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int key;
  cin >> key;
  int low = 0, high = n - 1;
  int found = -1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (a[mid] == key) {
      found = mid;
      break;
    }
    else if (a[mid] < key) {
      low = mid + 1;
    }
    else {
      high = mid - 1;
    }
  }
  if (found != -1) {
    cout << "Found at index " << found << endl;
  }
  else {
    cout << "Not found" << endl;
  }
  return 0;
}
