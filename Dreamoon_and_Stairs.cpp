#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x, n, m;
    cin >> n >> m;
    if (n < m)
    {
        cout << -1 << endl;
    }
    else
    {

        if (n % 2 == 0)
        {
            x = n / 2;
        }
        else
        {
            x = (n / 2) + 1;
            while (x % m != 0)
            {
                x++;
            }
        }
        cout << x << endl;
    }
}
int main()
{
    solve();
}