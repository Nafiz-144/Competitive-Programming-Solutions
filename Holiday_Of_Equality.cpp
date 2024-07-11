#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max = -1;

    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        count += max - a[i];
    }

    cout << count;

    return 0;
}
