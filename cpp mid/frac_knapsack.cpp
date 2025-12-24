#include<bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  float w[20], p[20], r[20];
  float W;
  for (int i = 0; i < n; i++) {
    cin >> p[i] >> w[i];
    r[i] = p[i] / w[i]; 
  }
  cin >> W;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (r[i] < r[j]) {
        swap(r[i], r[j]);
        swap(p[i], p[j]);
        swap(w[i], w[j]);
      }
    }
  }
  float totalProfit = 0.0;
  float remainingCapacity = W;
  for (int i = 0; i < n; i++) {
    if (w[i] <= remainingCapacity) {
      totalProfit += p[i];
      remainingCapacity -= w[i];
    }
    else {
      totalProfit += r[i] * remainingCapacity;
      break;
    }
  }
  cout << fixed << setprecision(2) << totalProfit << endl;
  return 0;
}