#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n, m;
  cin >> n;
  vector<string> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  cin >> m;
  vector<string> b(m), c(m);
  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
  }
  for (int i = 0; i < m; i++)
  {
    cin >> c[i];
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
