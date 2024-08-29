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
        for (int i = 0; i < n; ++i)
        {

            cin >> a[i];
        }
        int ans = 0, sum = 0;
        for (int i = 0; i < n; i = i + 2)
        {
            if (i == n)
            {
                ans = a[i] - 0;
            }
            else
            {
                sum += a[i] - a[i + 1];
            }
        }
        cout << ans + sum << endl;
    }
    return 0;
}