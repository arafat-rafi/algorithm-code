#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int lis[n];
  for (int i = 0; i < n; i++) {
    lis[i] = 1;
  }

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (arr[j] < arr[i]) {
        lis[i] = max(lis[i], 1 + lis[j]);
      }
    }
  }
  int m = 0;
  for (int i = 0; i < n; i++) {
    m = max(m, lis[i]);
  }
  cout << "Longest Increasing Subsequence is: " << m << endl;
  return 0;
}