#include <bits/stdc++.h>
using namespace std;
void solve()

{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int result = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if (result == 0 || result - 1)
        {
            cout << result << endl;
        }
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