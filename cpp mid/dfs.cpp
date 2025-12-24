#include <bits/stdc++.h>
using namespace std;
int main()
{
  int node, edge;
  cout << "Enter no of nodes: " << endl;
  cin >> node;
  cout << "Enter no of edges: " << endl;
  cin >> edge;

  vector<int> adj[node + 1];
  cout << "Enter edges: \n";
  for (int i = 0; i < edge; i++)
  {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  int start_node;
  cout << "Enter the starting node: " << endl;
  cin >> start_node;
  bool visit[node + 1];
  for (int i = 0; i <= node; i++)
    visit[i] = false;
  stack<int> st;
  st.push(start_node);
  visit[start_node] = true;

  while (!st.empty())
  {
    int fr = st.top();
    st.pop();
    cout << fr << " ";

    for (int i = adj[fr].size() - 1; i >= 0; i--)
    {
      if (!visit[adj[fr][i]])
      {
        visit[adj[fr][i]] = true;
        st.push(adj[fr][i]);
      }
    }
  }
}
