#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define all(v) (v).begin(), (v).end()
const int inf = 1e9;

void solve()
{
    ll a;
    cin >> a;
    vector<ll> v(a);

    for (auto &i : v)
        cin >> i;

    ll mn = *min_element(all(v));

    cout << mn % inf << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T = 1;
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}
