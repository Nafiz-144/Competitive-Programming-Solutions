#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    vector<long long> ans;
    long long p = 10;

    // Try all k such that (1 + 10^k) <= n
    while (1 + p <= n)
    {
        long long d = 1 + p; // d = 1 + 10^k
        if (n % d == 0)
        {
            ans.push_back(n / d);
        }
        p *= 10; // next power of 10
    }

    if (ans.empty())
    {
        cout << 0 << "\n";
    }
    else
    {
        sort(ans.begin(), ans.end());
        cout << ans.size();
        for (auto x : ans)
            cout << " " << x;
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
