#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, i;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int r = 0;
    for (i = 0; i < n; i++)
    {

        if (a[i] >= a[k - 1] && a[i] != 0)
        {

            r += 1;
        }
    }

    cout << r << endl; // Print the result
    return 0;
}
