#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        /*int a, b, c;
        cin >> a >> b >> c;
        int max_e = max({a, b, c});
        int min_e = min({a, b, c});
        if (min_e < a && a < max_e)
        {
            cout << a << endl;
        }
        else if (min_e < b && b < max_e)
        {
            cout << b << endl;
        }
        else if (min_e < c && c < max_e)
        {
            cout << c << endl;
        }*/

        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        cout << a[1] << endl;
    }
    return 0;
}