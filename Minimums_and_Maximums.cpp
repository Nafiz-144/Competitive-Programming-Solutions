#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if (r1 >= max(l1, l2) && r2 >= max(l1, l2))
        {
            cout << max(l1, l2) << endl;
        }
        else
        {
            cout << l1 + l2 << endl;
        }
    }
}