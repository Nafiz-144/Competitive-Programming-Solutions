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
        vector<int> a(n);

        // Input elements into the vector
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i)
        {
            if (k % 2 == 0)
            {
                if (i >= 2) // Check to prevent out-of-bound access
                {
                    cout << a[i - 2] << " " << n << " " << k << endl;
                }
            }
            else
            {
                cout << a[i] << endl;
            }
        }
    }
    return 0;
}
