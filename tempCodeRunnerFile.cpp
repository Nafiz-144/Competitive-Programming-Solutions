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

        // Initialize sum vector with zeros
        vector<int> sum(n, 0);
        for (int i = 0; i < n; ++i)
        {
            sum[i] = (i + 1) * a[i]; // Corrected index and multiplication
        }

        int max1 = *max_element(sum.begin(), sum.end());
        cout << max1 * 2 << endl;
    }
    return 0;
}
