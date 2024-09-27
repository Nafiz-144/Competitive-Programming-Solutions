#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    string a;
    cin >> a;
    int ans = 0;
    for (char ch = 'A'; ch < 'H'; ++ch)
    {
        ans += max(0, m - count(a.begin(), a.end(), ch));
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        solve();
    }
    return 0;
}
