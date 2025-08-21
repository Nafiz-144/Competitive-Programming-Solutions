#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n, m;
  cin >> n;

  string a;
  cin >> a;
  cin >> m;
  string b, c;
  cin >> b;
  cin >> c;

  deque<char> dq(a.begin(), a.end());

  for (int i = 0; i < m; i++)
  {
    if (c[i] == 'D')
    {
      dq.push_back(b[i]);
    }
    else
    {
      dq.push_front(b[i]);
    }
  }

  string result(dq.begin(), dq.end());
  cout << result << "\n";
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
