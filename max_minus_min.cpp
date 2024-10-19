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

    int l = 2, r = n - 1;
    int x = (l + r) / 2;
    if (result == 0 || result - 1)
    {
        cout << result << endl;
    }
    else
    {
        for (int i = l; i < r; i++)
        {
            a[i] += x;
        }
        cout << *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());
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