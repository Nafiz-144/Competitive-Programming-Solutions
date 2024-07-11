#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int a[n];
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (h >= a[i])
        {
            s += 1;
        }
        else
        {
            s += 2;
        }
    }

    cout << s;
    return 0;
}
