#include<bits/stdc++.h>
using namespace std;
int main () {
  int n;
  int a = 0, b = 1, next;
  cin >> n;
  cout << "Fibonacci Series: ";
  for (int i = 1; i <= n; i++) {
    cout << a << " ";
    next = a + b;
    a = b;
    b = next;
  }
  return 0;
}