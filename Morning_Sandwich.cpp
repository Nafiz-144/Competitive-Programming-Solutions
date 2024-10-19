#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int b, c, h;
    cin >> b >> c >> h;
    cout << (min(b - 1, c + h) * 2 + 1) << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }

    return 0;
}