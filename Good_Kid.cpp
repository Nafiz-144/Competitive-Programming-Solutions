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

        sort(a.begin(), a.end());
        a[0]++;

        int an = 1; // Initialize `an` inside the loop
        for (int i = 0; i < n; ++i)
            an *= a[i];

        cout << an << endl; // Output the result for the current test case
    }

    return 0;
}
