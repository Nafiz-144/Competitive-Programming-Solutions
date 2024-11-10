#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool ok = false;
    for (int i = 0; i < n; i++)
    {

        if (a[i] == k)
        {
            ok = true;
            break;
        }
        else
        {
            ok = false;
        }
    }
    if (ok == true)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No" << endl;
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