#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int s = 0;
    bool v = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s += x;
        if (x % 3 == 1)
        {
            v = true;
        }
    }
    if (s % 3 == 0)
    {
        cout << 0 << endl;
    }
    else if (s % 3 == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        if (v == true)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
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
