#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int a[100];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int low[1000], high[1000];
  int top = -1;
  top++;
  low[top] = 0;
  high[top] = n - 1;
  while (top >= 0){
    int l = low[top];
    int h = high[top];
    top--;
    if (l < h){
      int pivot = a[h];
      int i = l - 1;
      for (int j = l; j < h; j++){
        if (a[j] <= pivot){
          i++;
          swap(a[i], a[j]);
        }
      }
      swap(a[i + 1], a[h]);
      int p = i + 1;
      if (p - 1 > l){
        top++;
        low[top] = l;
        high[top] = p - 1;
      }
      if (p + 1 < h){
        top++;
        low[top] = p + 1;
        high[top] = h;
      }
    }
  }
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";

  return 0;
}
