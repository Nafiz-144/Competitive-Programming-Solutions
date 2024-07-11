#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    vector<int long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - i - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            swap(a[i], a[i + 1]);
        }
        cout << a[i];
    }

    return 0;
}