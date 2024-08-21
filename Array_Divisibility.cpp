#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        vector<long int> a(n);
        for (auto i = 0; i < n; ++i)
        {
            a[i] = i + 1;
        }
        for (auto i = 0; i < n; ++i)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}