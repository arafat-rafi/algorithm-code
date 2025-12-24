#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 1; i < n - 1; i++)
  {
    int m = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[m])
      {
        m = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[m];
    arr[m] = temp;
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}