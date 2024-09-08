#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int l, r, L, R;
        cin >> l >> r >> L >> R;
        if (r <= 5)
        {
            cout << abs(r - L) << endl;
        }
        else
        {
            cout << (abs(r - L)) + 1 << endl;
        }
    }
    return 0;
}