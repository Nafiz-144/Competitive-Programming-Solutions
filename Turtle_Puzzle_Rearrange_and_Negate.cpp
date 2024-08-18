#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int r = 0;
        for (auto i = 0; i < n; ++i)
        {
            r = r + abs(a[i]);
        }
        cout << r << endl;
    }
    return 0;
}