#include <iostream>
#include <string>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            ans++;
        else
            ans += n - 1;
    }

    cout << ans << '\n';
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
