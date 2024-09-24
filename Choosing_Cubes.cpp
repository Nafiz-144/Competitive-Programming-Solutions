#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;
        f--;
        k--;
        vector<int> a(n);
        for (auto i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int x = a[f];
        sort(a.begin(), a.end(), greater<int>());
        if (a[k] > x)
        {
            cout << "No" << endl;
        }
        else if (a[k] < x)
        {
            cout << "Yes" << endl;
        }

        else if (k == n - 1 || a[k + 1] < x)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "MAYBE" << endl;
        }
    }

    return 0;
}