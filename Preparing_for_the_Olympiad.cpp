#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int temp = a[n - 1];
    for (int i = 0; i < n - 1; i++)
    {

        temp += max(0, a[i] - b[i + 1]);
    }
    cout << temp << endl;
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