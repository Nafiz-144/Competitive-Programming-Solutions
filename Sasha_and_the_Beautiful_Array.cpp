#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n); // Use a vector instead of an array

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end()); // Sort the vector

    int s = 0;
    for (int i = 1; i < n; i++)
    {
        s += a[i] - a[i - 1];
    }

    cout << s << endl;
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
