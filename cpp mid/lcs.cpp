#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a, b;
  getline(cin, a);
  getline(cin, b);

  int m = a.size();
  int n = b.size();

  int E[1005][1005];

  for (int i = 0; i <= m; i++)
  {
    E[i][0] = 0;
  }
  for (int j = 0; j <= n; j++)
  {
    E[0][j] = 0;
  }

  for (int i = 1; i <= m; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (a[i - 1] == b[j - 1])
      {
        E[i][j] = 1 + E[i - 1][j - 1];
      }
      else
      {
        E[i][j] = max(E[i - 1][j], E[i][j - 1]);
      }
    }
  }

  cout << E[m][n];
  return 0;
}