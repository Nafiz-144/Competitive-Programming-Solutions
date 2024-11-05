#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n, k;
    cin >> n >> k;

    vector<int> v(k);
    for (int i = 0; i < k; i++)
    {
        int b, c;
        cin >> b >> c;
        v[b - 1] += c;
    }
    sort(v.rbegin(), v.rend());
    int ans = 0;
    for (int i = 0; i < min(n, k); i++)
    {
        ans += v[i];
    }
    cout << ans << endl;
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