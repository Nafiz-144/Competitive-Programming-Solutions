#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, k, i;
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        for (char c = 'a'; c < 'a' + k; ++c)
        {
            cout << c;
        }
    }
    cout << endl;
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