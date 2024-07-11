#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// don't solve

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unordered_map<pair<int, int>, int> cnt;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int xx = a[i] % x;
        int yy = a[i] % y;
        ans += cnt[{(x - xx) % x, yy}];
        cnt[{xx, yy}]++;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
