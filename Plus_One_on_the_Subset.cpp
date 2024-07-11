#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int MIN = INT_MAX;
        int MAX = INT_MIN;
        for (i = 0; i < n; i++)
        {
            MIN = min(MIN, a[i]);
            MAX = max(MAX, a[i]);
        }
        cout << MAX - MIN << endl;
    }

    return 0;
}