#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;

    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    cin >> q;

    vector<int> prefix_sum(n);
    prefix_sum[0] = a[0];
    for (int i = 1; i < n; ++i)
    {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }

    while (q--)
    {
        int i, j;
        cin >> i >> j;

        if (i == 0)
        {
            cout << prefix_sum[j] << endl;
        }
        else
        {
            cout << prefix_sum[j] - prefix_sum[i - 1] << endl;
        }
    }

    return 0;
}
