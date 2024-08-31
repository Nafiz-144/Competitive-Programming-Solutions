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

        int sum = 0;
        for (int i = 0; i < n - 1; i += 2)
        {
            sum += a[i] - a[i + 1];
        }

               if (n % 2 != 0)
        {
            sum += a[n - 1];
        }

        cout << sum << endl;
    }
    return 0;
}
