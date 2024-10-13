#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c = 0;
    sort(a.begin(), a.end());

    int l = 0, r = n - 1;

    while (l <= r)
    {

        if (a[l] + a[r] <= x)
        {
            l++;
        }
        r--;
        c++;
    }

    cout << c << endl;

    return 0;
}