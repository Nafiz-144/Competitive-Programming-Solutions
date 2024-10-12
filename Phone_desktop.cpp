#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int x, y;
    cin >> x >> y;
    int m = (y + 1) / 2;
    x = x - (m * 5 * 3 - y * 2 * 2);
    x = max(x, 0);
    m += (x + 5 * 3 - 1) / (5 * 3);
    cout << m << endl;
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