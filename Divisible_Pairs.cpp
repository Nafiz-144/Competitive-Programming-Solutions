#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int xx = a[i] % x;
            int yy = a[j] % y;
            if ((xx - yy + x) % x == 0)
            { // Check if difference modulo x is zero
                ans++;
            }
        }
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
