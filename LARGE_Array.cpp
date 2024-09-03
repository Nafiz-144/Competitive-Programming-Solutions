#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int sum = (n + k) - 1;
        int a[n], s = 0;
        for (int i = k; i < sum; i++)
        {
            s = a[i] + a[i + 1] - a[sum - 2] - a[sum - 1];
        }
        cout << abs(s) << endl;
    }
    return 0;
}