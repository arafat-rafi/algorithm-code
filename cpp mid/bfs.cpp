#include <bits/stdc++.h>
using namespace std;
int main()
{
  int node, edge, start_node;
  cin >> node >> edge;
  vector<int> adj[node + 1];
  bool visit[node + 1] = {false};

  for (int i = 0; i < edge; i++)
  {
    int u, v;
    cin >> u >> v;
    adj[v].push_back(u);
    adj[u].push_back(v);
  }
  cin >> start_node;
  queue<int> q;
  q.push(start_node);
  visit[start_node] = true;
  while (!q.empty())
  {
    int current = q.front();
    q.pop();

    cout << current << " ";

    for (int i = 0; i < adj[current].size(); i++)
    {
      int neighbor = adj[current][i];
      if (!visit[neighbor])
      {
        visit[neighbor] = true;
        q.push(neighbor);
      }
    }
  }
  return 0;
}